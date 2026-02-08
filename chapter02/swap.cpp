#include<iostream>

int swap(int *pa, int*pb);

int main(void)
{
  int x=10, y=20;
  
  std::cout<<"x: "<<x<<", y: "<<y<<std::endl;

  swap(&x, &y);

  std::cout<<"x: "<<x<<", y: "<<y<<std::endl;

  return 0;
}

int swap(int *pa, int*pb)
{
  if((pa==nullptr||pb==nullptr)||pa==pb)//null값인지 아닌지, 그리고 같은 주소인지 아닌지 확인
    return -1;
  *pa^=*pb;//xor연산을 이용한 값 교환
  *pb^=*pa;
  *pa^=*pb;

  return 0;
}