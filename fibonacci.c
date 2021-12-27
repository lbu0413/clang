#include <stdio.h>

int main()
{
    int num1 = 1, num2 = 1, fib = 0, sum = 0;

    while (1)
    {
        fib = num1 + num2;
        if (fib <= 1000000 && fib % 2 == 0)
        {
            sum += fib;
        }
        else if (fib > 1000000)
        {
            break;
        }
        num1 = num2;
        num2 = fib;
    }
    printf("%d", sum);
    return 0;
}