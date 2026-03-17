/*
2026-03-17
여러 종류의 예외 받기
*/

#include<iostream>
#include<string>

int func(int c);

int main(void)
{
  int c = 0;
  std::cin >> c;

  try
  {
    func(c);
  }
  catch(char x)
  {
    std::cout << "char " << x <<std::endl;
  }
  catch(int x)
  {
    std::cout << "int " << x <<std::endl;
  }
  catch(std::string& s)
  {
    std::cout << "string " << s << std::endl;
  }
  catch(const char *s)
  {
    std::cout << "string literal " << s << std::endl;
  }

  return 0;
}

int func(int c)
{
  if(c == 1)
  {
    throw 10;
  }
  else if(c == 2)
  {
    throw std::string("hi");
  }
  else if(c == 3)
  {
    throw 'a';
  }
  else
  {
    throw "hello!";
  }

  return 0;
}