#include <stdio.h>

int main()
{
    int *p;
    int a;

    p = &a;
    a = 17;

    printf("a의 주소는: %p \n", p);
    printf("a의 데이터는: %d \n", *p);
    printf("혹은 이렇게도 가능: %d", a);
    return 0;
}