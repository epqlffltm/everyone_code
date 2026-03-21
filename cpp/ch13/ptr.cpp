/*
2026-03-18
스마트 포인터
*/

#include<iostream>
#include<memory>

class A
{
  int *data;

  public:
  A()
  {
      std::cout<<"자원 획득"<<std::endl;
      data = new int[100];
  }

  void some()
  {
    std::cout << "일반 포인터와 동일하게 사용가능!" << std::endl;
  }
  ~A()
  {
    std::cout<<"자원 해체"<<std::endl;
    delete[] data;
  }
};

void call()
{
  try
  {
    std::unique_ptr<A>pa(new A());
    pa->some();
    
    throw std::runtime_error("예외 발생");
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
  

  
}

int main(void)
{
  call();

  return 0;
}