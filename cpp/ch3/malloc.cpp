/*
2026-03-10
동적 할당
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

int main(void)
{
  srand(time(NULL));
  int size = 0;
  std::cout<< "arrray size :";
  std::cin >> size;

  int *ary = new int[size];
  for(int i = 0; i < size; i++)
  {
    *(ary+i) = rand()%10;
  }

  for(int i =0; i<size; i++)
  {
    std::cout << *(ary+i)<<std::endl;
  }

  delete ary;

  return 0;
}