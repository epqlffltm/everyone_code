/*
2021-02-10
레퍼런스
*/

#include<iostream>

void val(int *p);
void val(int &r);

int main(void)
{
  int n = 5;
  int &rn = n;

  std::cout<<"n : "<<n<<std::endl;
  std::cout<<"rn : "<<rn<<std::endl;

  val(&n);

  std::cout<<"n : "<<n<<std::endl;
  std::cout<<"rn : "<<rn<<std::endl;

  val(rn);

  std::cout<<"n : "<<n<<std::endl;
  std::cout<<"rn : "<<rn<<std::endl;

  return 0;
}

void val(int *p)
{
  *p = 10;
}

void val(int &r)
{
  r = 20;
}