#include<iostream>
#include<set>
#include<vector>
#include<cstdlib>
#include<ctime>

template<typename T>
void print(std::set<T>&s);
template<typename T>
void print(std::vector<T>&v);

int main(void)
{
  srand(time(NULL));

  std::vector<int>v;
  std::set<int>s;

  

  for(int i = 0; i<10; i++)
  {
    int num = rand()%10;
    v.push_back(num);
    s.insert(num);
  }

  print(v);
  print(s);

  return 0;
}

template<typename T>
void print(std::set<T>&s)
{
  for(auto itr = s.begin(); itr != s.end(); ++itr)
  {
    std::cout << *itr << " ";
  }
  std::cout << std::endl;
}

template<typename T>
void print(std::vector<T>&v)
{
  for(int elem: v)
  {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}