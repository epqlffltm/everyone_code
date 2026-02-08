#include "ns1.h"
#include <iostream>

namespace header1
{
  int foo(int n)
  {
    int m = n + 10;
    return m;
  }

  void bar(int n)
  {
    std::cout<<n<<std::endl;
  }
} 