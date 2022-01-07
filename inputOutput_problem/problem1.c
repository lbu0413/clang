// 두 숫자를 입력받아 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.

#include <stdio.h>

int main()
{
    int a, b;
    printf("첫 번째 숫자: ");
    scanf("%d", &a);
    printf("두 번째 숫자: ");
    scanf("%d", &b);

    printf("두 수의 합: %d", a + b);
    return 0;
}