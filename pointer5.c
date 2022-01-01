// 상수 포인터?

#include <stdio.h>
int main()
{
    int a;
    int b;
    const int *pa = &a;

    *pa = 3; // 올바르지 않은 문장
    pa = &b; // 올바른 문장
    return 0;
}

// int main()
// {
//     int a;
//     int b;
//     int* const pa = &a;

//     *pa = 3; // 올바른 문장
//     pa = &b; // 올바르지 않은 문장
//     return 0;
// }

// 위의 두 예제를 합치면
// int main()
// {
//     int a;
//     int b;
//     const int *const pa = &a;

//     *pa = 3; // 올바르지 않은 문장
//     pa = &b; // 올바르지 않은 문장

//     return 0;
// }