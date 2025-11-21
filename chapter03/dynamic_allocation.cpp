/*
2025-11-21
new와 delete의 사용
*/

#include <iostream>
#include <cstdlib>

int main(void)
{
    int *p = new int;   // 힙에 int 하나 동적 할당

    *p = 10;            // 메모리에 값 저장
    std::cout << *p << std::endl;

    delete p;           // 동적 할당 해제
    p = nullptr;        // (옵션) 댕글링 포인터 방지

    return 0;
}
