/*
2025-11-21
new로 배열 할당하기
*/

#include <iostream>

void fill_array(int &n, int *ary);
void print_array(int &n, int *ary);

int main(void)
{
    int size = 10;
    std::cin >> size;

    int *ary = new int[size];

    fill_array(size, ary);
    print_array(size, ary);

    delete[] ary;   // 동적 배열 해제
    return 0;
}

void fill_array(int &n, int *ary)
{
    for (int i = 0; i < n; i++)
    {
        ary[i] = i + 1;
    }
}

void print_array(int &n, int *ary)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << ary[i] << std::endl;
    }
}
