#include <stdio.h>

int main()
{
    int *p;
    int a;

    p = &a;
    a = 2;

    printf("a의 값: %d \n", a);
    printf("*p의 값: %p \n", p);
}