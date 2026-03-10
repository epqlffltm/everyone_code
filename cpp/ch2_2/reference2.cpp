/*
2026-03-10
레퍼런스
*/

#include<iostream>

int val(int *p);
int rev(int &r);

int main(void)
{
  int n = 5;
  int& r = n;

  std::cout << "n: " << n << std::endl;
  std::cout << "r: "<< r << std::endl;
  int pn = val(&n);
  int rn = rev(n);
  std::cout << "pn: " << pn << std::endl;
  std::cout << "rn: " << rn <<std::endl;

  return 0;
}

int val(int *p)
{
  int n = *p + 5;

  return n;
}

int rev(int &r)
{
  int n = r + 10;

  return n;
}