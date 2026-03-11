/*
2026-03-12
sort malloc
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include <algorithm>

void print(int *ary , const int &ref);

int main(void)
{
  srand(time(NULL));
  
  int size = rand()%10;
    std::cout<< "size = " << size << std::endl;

  int *ary = new int[size];

  for(int i = 0; i< size; i++ )
  {
    *(ary+i) = rand()%10;
  }

  print(ary, size);

  std::sort(ary, ary+size);

  print(ary, size);

  delete[] ary;

  return 0;
}

void print(int *ary , const int &ref)
{
  for(int i = 0; i < ref; i++)
  {
    std::cout << " " <<*(ary+i);
  }
  std::cout<<std::endl;
}