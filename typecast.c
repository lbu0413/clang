#include <stdio.h>

int main()
{
    int i;
    float f;

    printf("실수를 입력하세요: ");
    scanf("%f", &f);

    i = (f - (int)f) * 100;
    printf("i = %d\n", i);

    return 0;
}