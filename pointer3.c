#include <stdio.h>

int main()
{
    int a;
    int b;
    int *p;

    p = &a; //a의 주소값을 p(포인터)에 담는다. 즉, p라는 포인터는 a의 주소값을 가리키고 있다.
    *p = 2; //
    p = &b;
    *p = 4;

    printf("a: %d \n", a);
    printf("b: %d \n", b);
    return 0;
}