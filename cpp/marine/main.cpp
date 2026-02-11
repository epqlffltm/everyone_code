/*
2026-02-10
배틀로얄 전투
*/

#include<iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include<vector>
#include<cmath>
#include<sqlite3.h>

class Unit
{
  private:
  std::string name;
  int hp;
  int x;//x좌표
  int y;//y축 좌표
  int damage;//데미지
  int range; // 사거리 변수 추가
  bool dead;
  void save_log_to_db(sqlite3* db, std::string attacker_name, int dmg, double dist);// 내부에서만 사용하는 DB 저장용 프라이빗 함수

  public:
  Unit();//기본 생성자
  Unit(std::string name, int x, int y);
  ~Unit();

  void attack(Unit& target);//공격
  void be_attacked(int damage);
  void move(int x, int y);//이동
  void show();//상태 보여주기
  bool is_dead();
  double get_distance(const Unit& target);
};

// --- 여기서부터 구현부 (Implementation) ---

Unit::Unit(void) : name("unknown"), hp(50), x(0), y(0), damage(5), range(3) dead(false){}//기본 생성자

Unit::Unit(std::string name, int x, int y)
{
  this->name = name;
  this->x = x;
  this->y = y;
  this->hp = 50;
  this->damage = 5;
  this->range = 3;
  this->dead = false;
}

Unit::~Unit(){}

void Unit::attack(Unit& target, sqlite3* db)
{
  if(dead || target.dead)
  {
    return;
  }
  double dist = get_distance(target);

  //사거리 체크
  if(dist <= (double)range)
  {
    std::cout<<<< "[" << name << "]이(가) " << target.name << "을 공격! (거리: " << dist << ")" << std::endl;
    target.be_attacked(this->damage, this->name, dist, db);
  }
  else
  {
    std::cout << "[" << name << "]의 사거리가 부족합니다. (거리: " << dist << ", 사거리: " << range << ")" << std::endl;
  }
}

void Unit::be_attacked(int damage, std::string attacker_name, double dist, sqlite3* db)
{
  this->hp -= damage;
  if(this->hp <= 0)
  {
    this->hp = 0;
    this -> dead = true;
    std::cout << ">> " << name << "이(가) 쓰러졌습니다!" << std::endl;
  }
  save_log_to_db(db, attacker_name, damage, dist);
}

void Unit::move(int x, int y) 
{
  this->x = x;
  this->y = y;
  std::cout << name << "이(가) (" << x << ", " << y << ")로 이동했습니다." << std::endl;
}

void Unit::show() 
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "이름: " << name << (dead ? " (사망)" : " (생존)") << std::endl;
    std::cout << "HP: " << hp << " | 위치: (" << x << ", " << y << ")" << std::endl;
    std::cout << "-------------------------" << std::endl;
}

bool Unit::is_dead()
{
  return dead;
}

double Unit::get_distance(const Unit& target)
{
  return std::sqrt(std::pow(this->x - target.x, 2) + std::pow(this->y - target.y, 2));
}

void Unit::save_log_to_db(sqlite3* db, std::string atring attacker_name, int dmg, double dist)
{
  if (!db) return;
  std::string sql = "INSERT INTO BattleLogs (Attacker, Target, Damage, Distance, IsDead) VALUES ('"+ attacker_name + "', '" + name + "', " + std::to_string(dmg) + ", " + std::to_string(dist) + ", " + (dead ? "1" : "0") + ");";
  sqlite3_exec(db, sql.c_str(), nullptr, nullptr, nullptr);
}

int main(void) 
{
  srand(time(NULL));
  int x = 0, y = 0;
  //SQLite DB 초기화
  sqlite3* db = nullptr;
  // sqlite3_open("battle.db", &db);
  // 테이블 생성 쿼리 실행 등...
  
  // 1. 유닛 생성
  Unit player("용사", 0, 0);
  Unit monster("슬라임", 1, 1);

  // 2. 초기 상태 확인
  player.show();
  monster.show();

  // 3. 전투 시뮬레이션 (레퍼런스 활용)
  std::cout << "x : "
  std::cin >> x;
  std::Cout >> std::endl;

  std::cout << "y : "
  std::cin >> y;
  std::Cout >> std::endl;

  player.move(x, y);

  player.attack(monster,db); // monster가 레퍼런스로 전달됨
  monster.show();

  //몬스터도 이동
  x = rand() % 10 + 1;
  y = rand() % 10 + 1;
  
  monster.move(x.y);
  monster.attack(player, db);
  monster.show();

  if(db) sqlite3_close(db);

  return 0;
}
