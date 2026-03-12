/*
2026-03-12
예외 처리
*/

#include<iostream>
#include<cstdlib>

bool func1(int *ary);
bool func2(int *ary);
bool func3(int *ary);

int main(void)
{
  int *ary=nullptr;

  if(func1(ary))
  {
    std::cout <<"true"<<std::endl;
  }
  else
  {
    std::cout<<"felas"<<std::endl;
  }

  return 0;
}

bool func1(int *ary)
{
  if(func2(ary))
  {}
  return false;
}
bool func2(int *ary)
{
  if(func3(ary))
  {}
  return false;
}
bool func3(int *ary)
{
  ary = (int *)malloc(100000000);
  if(ary == NULL)
  return false;

  return true;
}