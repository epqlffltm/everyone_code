/*
2026-03-11
todo
*/

#include<iostream>
#include<string>
#include<set>

template<typename T>
void print(std::set<T>&s);

class Todo
{
  int priority;
  std::string job;

  public:
Todo(int priority, std::string job)
    : priority(priority), job(job)
    {}
    bool operator<(const Todo& t) const 
    {
    if (priority == t.priority) 
    {
      return job < t.job;
    }
    return priority > t.priority;
  }

  friend std::ostream& operator<<(std::ostream& o, const Todo& td);
};


int main(void) 
{
  std::set<Todo> todos;

  todos.insert(Todo(1, "농구 하기"));
  todos.insert(Todo(2, "수학 숙제 하기"));
  todos.insert(Todo(1, "프로그래밍 프로젝트"));
  todos.insert(Todo(3, "친구 만나기"));
  todos.insert(Todo(2, "영화 보기"));
}

template<typename T>
void print(std::set<T>&s)
{
  for(const auto elem:s)
  {
    std::cout << elem << " " << std::endl;
  }
}