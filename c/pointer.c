/*
2026-02-08
pointer손풀기
*/
#include<stdio.h>

int main(void)
{
  int n = 10;
  int *pn;
  pn = &n;

  printf("%d\n",*pn);

  n = 15;

  printf("%d\n",*pn);

  printf("%p\n",&n);
  printf("%p\n",pn);

  return 0;
}
