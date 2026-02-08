#include "ns2.h"
#include <iostream>

namespace header2
{
  int foo(int n)
  {
    int m = n + 20;
    return m;
  }

  void bar(int n)
  {
    std::cout<<n<<std::endl;
  }
}