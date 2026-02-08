#include<iostream>

class Animal
{
  private:
  int food;
  int weight;

  public:
  void set_animal(int _food, int _weight)
  {
    food = _food;
    weight = _weight;
  }
  void increase_food(int inc)
  {
    food += inc;
    weight += (inc/3);
  }
  void view_stat()
  {
    std::cout<< "이동물의 음식은 "<<food<<std::endl;
    std::cout<< "이동물의 체중은 "<<weight<<std::endl;
  }
};

int main(void)
{
  Animal animal;
  animal.set_animal(100,50);
  animal.view_stat();
  std::cout<<"사료 30 급여"<<std::endl;
  animal.increase_food(30);

  animal.view_stat();

  return 0;
}