#include<iostream>

void print(int x);
void print(double x);
void print(char x);

int main(void)
{
  int a = 1;
  char b = '2';
  double c = 3;
  float d = 4;
  //long e = 5;

  print(a);
  print(b);
  print(c);
  print(d);
  //print(e);

  return 0;
}

void print(int x)
{
  std::cout<<x<<std::endl;
}
void print(double x)
{
  std::cout<<x<<std::endl;
}
void print(char x)
{
  std::cout<<x<<std::endl;
}