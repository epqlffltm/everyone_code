/*
2026-03-12
vector sort 역정렬
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>
#include<functional>

template<typename T>
void print(T begin, T end);

template<typename T>
struct greater_comp
{
  bool operator()
  (const T& a, const T& b)
  const{return a>b;}
};

/*struct compare
{
  bool operator() 
  (const int &a, const int &b) 
  const {return a>b;}
};
*/
int main(void)
{
  srand(time(NULL));

  std::vector<int>v;

  int n = rand()%10+10;
  
  for(int i = 0; i<n; i++)
  {
    v.push_back(rand()%10);
  }

  std::cout << "정렬 전 ----" << std::endl;
  print(v.begin(), v.end());

  std::sort(v.begin(), v.end(), greater_comp<int>());

  std::cout << "정렬 후 ----" << std::endl;
  print(v.begin(), v.end());

  return 0;
}

template<typename T>
void print(T begin, T end)
{
  while(begin != end)
  {
    std::cout << *begin <<std::endl;
    begin ++;
  }
}