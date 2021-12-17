#include <stdio.h>

void calc()
{
    float won = 0;
    float dollar = 0;
    printf("input won\n");
    scanf("%f", &won);
    dollar = won * 0.00089f;
    printf("Dollar = %f\n", dollar);
}

int main()
{

    // int i = 0, j = 0;

    // printf("Input two integers \n");
    // scanf("%d%d", &i, &j);
    // printf("Values are %d and %d \n", i, j);
    // printf("%d plus %d = %d", i, j, i + j);
    calc();
    return 0;
}