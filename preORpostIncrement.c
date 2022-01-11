#include <stdio.h>

int pre()
{
    int a = 10;
    int b;
    printf("전치 증가 연산\n");
    b = ++a;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

int post()
{
    int a = 10;
    int b;
    printf("후치 증가 연산\n");
    b = a++;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

int main()
{
    pre();
    post();
    return 0;
}
