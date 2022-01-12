#include <stdio.h>

int main()
{
    // 비교 연산자, 논리 연산자
    int a, b;
    scanf("%d%d", &a, &b);

    int p = a > b;
    int q = a < b;
    int r = a == b;
    // bool: 진리값을 저장하는 변수 (1바이트 = 8비트)
    // bool p = a > b;
    // bool q = a < b;
    // bool r = a == b;

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);

    // 0: False, 1: True
    return 0;
}