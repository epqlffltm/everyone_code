/*
2025-03-10
vector
*/

#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

int main(void)
{
  srand(time(NULL));
  std::vector<int>v;

  for(int i=0; i<10; i++)
  {
    v.push_back(rand()%10);
  }

  for(std::vector<int>::size_type i =0; i<v.size(); i++)
  {
    std::cout<< i << " : " << v[i] << std::endl;
  }

  return 0;
}