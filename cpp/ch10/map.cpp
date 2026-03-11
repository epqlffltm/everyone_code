/*
2026-03-11
map
*/

#include<iostream>
#include<map>
#include<string>

template<typename k, typename v>
void print(std::map<k, v>&m);

int main(void)
{
  std::map<std::string, double>m;

  m.insert(std::pair<std::string, double>("pi",3.14));
  print(m);
  m.insert({"golden ratio",1.168});
  print(m);
  m["golden ratio"]=40000;
  print(m);

  return 0;
} 

template<typename k, typename v>
void print(std::map<k, v>&m)
{
  for(auto itr = m.begin(); itr != m.end(); ++itr)
  {
    std::cout << itr->first << "  " << itr->second << std::endl;
  }
  std::cout << std::endl;
}