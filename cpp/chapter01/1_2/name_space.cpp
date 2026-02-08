#include<iostream>

namespace header1
{
  void func()
  {
    int n=10;
    char c='A';
    
    std::cout<<n<<","<<c<<std::endl;
  }
  int a=10;
}

namespace header2
{
  void func()
  {
    int n=20;
    char c='B';
    std::cout<<n<<","<<c<<std::endl;
  }
  int a=20;
}

int main(void)
{
  header1::func();
  header2::func();

  std::cout<<header1::a<<std::endl;
  std::cout<<header2::a<<std::endl;

  return 0; 
}

