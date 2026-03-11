/*
2026-03-12
todo2
해쉬셋에 클래스 넣기
*/

#include <iostream>
#include <string>
#include <unordered_set>

class Todo
{
    int priority;      // 중요도
    std::string job;   // 할 일

public:
    Todo(int priority, const std::string& job)
        : priority(priority), job(job) {}

    bool operator==(const Todo& t) const
    {
        return priority == t.priority && job == t.job;
    }

    friend std::ostream& operator<<(std::ostream& o, const Todo& t);
    friend struct std::hash<Todo>;
};

namespace std
{
    template <>
    struct hash<Todo>
    {
        size_t operator()(const Todo& t) const
        {
            hash<string> hash_func;
            return static_cast<size_t>(t.priority) ^ hash_func(t.job);
        }
    };
}

std::ostream& operator<<(std::ostream& o, const Todo& t)
{
    o << "[중요도 : " << t.priority << "] " << t.job;
    return o;
}

template <typename K>
void print_unordered_set(const std::unordered_set<K>& s)
{
    for (const auto& elem : s)
    {
        std::cout << elem << std::endl;
    }
}

template <typename K>
void is_exist(const std::unordered_set<K>& s, const K& key)
{
    auto itr = s.find(key);
    if (itr != s.end())
    {
        std::cout << key << " 가 존재!" << std::endl;
    }
    else
    {
        std::cout << key << " 가 없다" << std::endl;
    }
}

int main()
{
    std::unordered_set<Todo> todos;

    todos.insert(Todo(1, "농구 하기"));
    todos.insert(Todo(2, "수학 숙제 하기"));
    todos.insert(Todo(1, "프로그래밍 프로젝트"));
    todos.insert(Todo(3, "친구 만나기"));
    todos.insert(Todo(2, "영화 보기"));

    print_unordered_set(todos);
    std::cout << "----------------" << std::endl;

    is_exist(todos, Todo(1, "농구 하기"));
    is_exist(todos, Todo(5, "잠 자기"));

    return 0;
}