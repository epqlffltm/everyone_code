#include<iostream>
#include"ns1.h"
#include"ns2.h"

void n1();
void n2();

int main(void)
{
  n1();
  n2();

  return 0;
}

void n1()
{
  int n=10;
  int m=header1::foo(n);
  header1::bar(m);
}

void n2()
{
  int n=10;
  int m=header2::foo(n);
  header2::bar(m);
}