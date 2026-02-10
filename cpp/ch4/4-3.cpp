/*
2026-02-10
마린 만들기
*/

#include<iostream>

class Marine//워드를 고려하며 4byte단위로 배치
{
  int hp;
  int damage;
  int coord_x, coord_y;//마린 좌표
  bool is_dead;
  char* name;

  public:
  Marine();//기본생성자
  Marine(int x, int y, const char* marine_name);
  Marine(int x,int y); //마린 좌표
  ~Marine();

  int attack();
  void be_attacked(int damage_earn);
  void move(int x, int y);// 새로운 위치

  void show_status();// 상태를 보여준다.
};

Marine::Marine(void)
{
  hp = 50;
  coord_x = 0;
  coord_y = 0;
  damage = 5;
  is_dead = false;
  name = NULL;
}

Marine::Marine(int x, int y, const char* marine_name)
{
  name = new char[strlen(marine_name) + 1];
  strcpy(name, marine_name);

  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
}

void Marine::move(int x, int y)
{
  coord_x = x;
  coord_y = y;
}

int Marine::attack(void)
{
  return damage; 
}

void Marine::be_attacked(int damage_earn)
{
  hp -= damage_earn;
  if (hp <= 0)
  is_dead = true;
}
void Marine::show_status(void) 
{
  std::cout << " *** Marine *** " << std::endl;
  std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "<< std::endl;
  std::cout << " HP : " << hp << std::endl;
}

int main(void)
{
  const int max = 100;

  Marine* marines[max];

  marines[0] = new Marine(2,3);
  marines[1] = new Marine(3,5);

  marines[0]->show_status();
  marines[1]->show_status();

  std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;

  marines[0]->be_attacked(marines[1]->attack());

  marines[0]->show_status();
  marines[1]->show_status();

  delete marines[0];
  delete marines[1];

  return 0;
}

/*
int main(void)
{
  Marine marine1(2, 3);
  Marine marine2(3, 5);

  marine1.show_status();
  marine2.show_status();

  std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
  marine2.be_attacked(marine1.attack());

  marine1.show_status();
  marine2.show_status();

  return 0;
}
  */