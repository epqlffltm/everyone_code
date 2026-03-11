/*
2026-03-12
sort
*/

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>

template<typename I>
void print(I begin, I end);

int main(void)
{
  srand(time(NULL))

  std::vector<int>v;

  for(int i = 0; i<10; i++)
  {
    v.push_back(rand()%10);
  }

  print(v.begin(),v.end());

  std::sort(v.begin(),v.end());

  print(v.begin(),v.end());

  return 0;
}

template<typename I>
void print(I begin, I end)
{
  while(begin != end)
  {
    std::cout << *begin << " ";
    begin++;
  }
  std::cout << std::endl;
}