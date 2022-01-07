#include <stdio.h>

int sum(int num)
{
    int summ = 0;
    for (int i = 1; i <= num; i++)
    {
        summ += i;
    }
    printf("%d", summ);
    return 0;
}

int main()
{
    sum(10);
    return 0;
}