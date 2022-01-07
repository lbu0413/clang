// 3. 알파벳을 입력받아 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요.

#include <stdio.h>
int main()
{
    char alph, next;
    printf("알파벳을 입력하세요: ");
    scanf("%c", &alph);
    if (alph == 'z')
    {
        next = 'a';
    }
    else if (alph == 'Z')
    {
        next = 'A';
    }
    else
    {
        next = alph + 1;
    }
    printf("%c의 다음 알파벳은 %c입니다. ", alph, next);
    return 0;
}