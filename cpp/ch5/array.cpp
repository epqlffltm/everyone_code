/*
2026-03-21
c++배열
*/

#include<iostream>
#include<memory>

int main(void)
{
  //기존 방식
  //int *ary = new int[100];
  //delete[] ary;  // 직접 해제 필요
  
  //기존 방식2
  //std::unique_ptr<int[]>ary = std::make_unique<int[]>(100);

  auto pary = std::make_unique<int[]>(10);

  char list[] = {"hallo"};

  for(int i = 0; i<10; i++)
  {
    pary[i] = (i+1);
  }

  for(int i = 0; i<10; i++)
  {
    std::cout<<pary[i]<<std::endl;
  }

  for(int i:list)
  {
    std::cout<<list[i];
  }
  std::cout<<std::endl;

  return 0;
}