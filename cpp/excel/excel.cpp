/*
2026-02-10
excel만들기
*/

#include<iostream>
#include <string>

class Vector
{
  int capacity;
  int length;
  std::string* data;

  public:
  // 생성자
  Vector(int n =1);

  //맨 뒤에 새로운 원소를 추가한다.
  void push_back(std::string s);

  //임의의 위치에 원소를 접근한다.
  std::string operator[](int i);

  //x번째 원소를 제거한다
  void remove(int x);

  //현제 백터 크기를 구한다.
  int sixe();

  ~Vector();
};

void Vector::push_back(std::string s)
{
  if(capacity <= length)
  {
    std::string* time = new std::string[capacity * 2];
    for(int i = 0; i < length; i++)
    {
      temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    capacity *= 2;
  }
  data[length] = s;
  length++;
}

std::string Vector::operator[](int i)
{
  return data[i];
}

void Vector::remove(int x)
{
  for (int i = x + 1; i < length; i++) 
  {
    data[i - 1] = data[i];
  }
  length--;
}

int Vector::size() 
{
  return length;
}

Vector::~Vector()
{
  if (data)
  {
    delete[] data;
  }
}

struct Node 
{
  Node* prev;
  std::string s;

  Node(Node* prev, std::string s) : prev(prev), s(s) {}
};

class Stack 
{
  struct Node {
    Node* prev;
    std::string s;

    Node(Node* prev, std::string s) : prev(prev), s(s) {}
  };

  Node* current;
  Node start;

public:
  Stack();

  // 최상단에 새로운 원소를 추가한다.
  void push(std::string s);

  // 최상단의 원소를 제거하고 반환한다.
  std::string pop();

  // 최상단의 원소를 반환한다. (제거 안함)
  std::string peek();

  // 스택이 비어있는지의 유무를 반환한다.
  bool is_empty();

  ~Stack();
};

Stack::Stack() : start(NULL, "")
{
  current = &start;
}
void Stack::push(std::string s) 
{
  Node* n = new Node(current, s);
  current = n;
}
std::string Stack::pop()
{
  if (current == &start) return "";

  std::string s = current->s;
  Node* prev = current;
  current = current->prev;

  // Delete popped node
  delete prev;
  return s;
}
std::string Stack::peek()
{
  return current->s;
}
bool Stack::is_empty()
{
  if (current == &start) return true;
  return false;
}
Stack::~Stack()
{
  while (current != &start)
  {
    Node* prev = current;
    current = current->prev;
    delete prev;
  }
}

int main(void)
{

}
