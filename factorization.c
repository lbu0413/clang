#include <stdio.h>

int main()
{
    int number, i;
    scanf("%d", &number);

    for (i = 2; i <= number; i++)
    {
        while (number % i == 0)
        {
            number /= i;
            printf("%d ", i);
        }
    }
    return 0;
}