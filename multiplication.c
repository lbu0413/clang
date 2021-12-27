#include <stdio.h>

int main()
{
    int n, sum = 1;

    printf("n을 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("%d", sum);
    return 0;
}