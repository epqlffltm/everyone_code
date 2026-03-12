/*
2026-03-12
원소 제거
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

template<typename T>
void print(T begin, T end);

int main(void)
{
  std::vector<int>v;
  srand(time(NULL));

  int n = rand()%10+5;
  for(int i = 0; i <n; i++)
  {
    v.push_back(rand()%10);
  }

  std::cout << "처음 vec 상태 ------" << std::endl;
  print(v.begin(),v.end());

  std::cout << "벡터에서 값이 3 인 원소 제거 ---" << std::endl;
  v.erase(std::remove(v.begin(), v.end(),3),v.end());
  print(v.begin(),v.end());

  return 0;
}

template<typename T>
void print(T begin, T end)
{
  while (begin != end)
  {
    std::cout << *begin << "  ";
  }
  std::cout << std::endl  
}