#include <stdio.h>

int main()
{
    int score;

    printf("당신의 점수를 입력하세요. \n");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("당신은 합격입니다!");
    }
    else
    {
        printf("당신은 불합격입니다.");
    }
    return 0;
}