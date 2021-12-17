#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    unsigned int u_max = UINT_MAX;

    // 1111 + 1 = 0000 4자리 밖에 없다면 0으로 돌아간다.
    // 0000 - 1 = 1111

    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;

    // i to binary representation
    char buffer[33];

    printf("max of unsigned %u\n", u_max);
    printf("binary: %s\n", buffer);

    // printf("min of unsigned %u\n", u_min);
    // printf("max of signed %d\n", i_max);
    // printf("min of signed %d", i_min);

    // printf("%lu\n", sizeof(unsigned int));
    // printf("%lu\n", sizeof(i));

    return 0;
}