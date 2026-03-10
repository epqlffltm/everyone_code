/*
2026-03-10
*/

#include<iostream>
#include<cstdlib>
#include<vector>

int main(void)
{
  std::vector<int>v;
  int size = 0;

  try
  {
    std::cin >> size;
    if(size <=0)
    {throw std::runtime_error("size error");}

    int n = 0;
    
    for(auto i =0; i<size; i++)
    {
      std::cin >> n;
      v.push_back(n);
    }

    for(int i :v)
    {
      std::cout<<i<<std::endl;
    }

    for(auto itr = v.begin(); itr != v.end(); itr++)
    {
      std::cout << *itr << std::endl;
    }
  
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
    exit(1);
  }
  return 0;
}