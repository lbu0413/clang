#include <stdio.h>

int main()
{
    int a, b, c, count = 0;

    for (a = 1997; a > 667; a--)
    {
        for (b = 2; b < a; b++)
        {
            for (c = 1; c < b; c++)
            {
                if (a + b + c == 2000)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
}