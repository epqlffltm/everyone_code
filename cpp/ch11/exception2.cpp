/*
2026-03-12
예외 발생시키기
*/

#include<iostream>
#include<stdexcept>
//#include<vector>

template <typename T>
class Vecter
{
  public:
  Vecter(size_t size) : size_(size)
  {
    data_ = new T[size_];
    forI(int i = 0; i<size_; i++)
    {
      data_[i] = i;
    }
  }
  const T& at(size_t index) const
  {
    if(index >= size_)
    {
      throw out_of_range("백터의 인덱스 범위를 초과하였습니다.");
    }
    return data_[index];
  }
  ~Vector()
  {
    delete[]data_;
  }

  private:
  T* data_;
  size_t size_;
};

int main(void)
{
  Vector<int> vec(3);

  int index, data = 0;
  std::cin >> index;

  try
  {
    data = vec.at(index);
  }
  catch(std::out_of_range& e)
  {
    std::cout << "예외 발생 ! " << e.what() << std::endl;
  }
  std::cout << "읽은 데이터 : " << data << std::endl;

  return 0;
}