/*
2026-03-10
insert 와 erase 함수 사용
*/

#include<iostream>
#include<vector>

template<typename T>
void print(const std::vector<T>&v);

int main(void)
{
  int size = 5;
  std::vector<int>v;
  for(int i = 0; i<size; ++i)
  {
    v.push_back(i*10);
  }

  std::cout << "처음 벡터 상태" << std::endl;
  print(v);
  std::cout << "----------------------------" << std::endl;

  std::cout << "vec[2] 앞에 15 추가" << std::endl;
  v.insert(v.begin()+2,15);
  print(v);
  std::cout << "----------------------------" << std::endl;

  std::cout << "vec[3] 제거" << std::endl;
  v.erase(v.begin()+3);
  print(v);
  std::cout << "----------------------------" << std::endl;

  return 0;
}

template<typename T>
void print(const std::vector<T>&v)
{
  for(auto itr = v.begin(); itr != v.end(); ++itr)
  {
    std::cout<<*itr<<std::endl;
  }
}