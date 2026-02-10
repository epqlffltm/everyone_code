/*
2021-02-10
레퍼런스
*/

#include<iostream>

void val(int *p);

int main(void)
{
  int n = 5;

  std::cout<<n<<std::endl;

  val(&n);

  std::cout<<n<<std::endl;

  return 0;
}

void val(int *p)
{
  *p = 10;
}
