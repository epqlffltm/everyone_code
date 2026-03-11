/*
2026-03-11
hash map
*/

#include<iostream>
#include<string>
#include<unordered_set>

template<typename k>
void print(const std::unordered_set<k>&m);

template<typename k>
void is_exist(std::unordered_set<k>&s,k key);

int main(void)
{
  std::unordered_set<std::string> s;

  s.insert("hi");
  s.insert("my");
  s.insert("name");
  s.insert("is");
  s.insert("psi");
  s.insert("welcome");
  s.insert("to");
  s.insert("c++");


  print(s);
  std::cout << "----------------" << std::endl;
  is_exist(s, std::string("c++"));
  is_exist(s, std::string("c"));

  std::cout << "----------------" << std::endl;
  std::cout << "'hi' 를 삭제" << std::endl;
  s.erase.(s.find("hi"));
  is_exist(s,std::string("hi"));

  return 0;
}

template<typename k>
void print(const std::unordered_set<k>&m)
{
  for(const auto& elem: m)
  {
    std::cout<<elem<<std::endl;
  }
}

template<typename k>
void is_exist(std::unordered_set<k>&s,k key)
{
  auto itr = s.find(key);
  if(itr != s.end())
  {
    std::cout<<key << "true" << std::endl;
  }
  else
  {
    std::cout << key << "feles" << std::endl; 
  }
}