#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("번호를 입력하세요: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= (n * 2 - i - j); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}