#include <stdio.h>

int main()
{
    int arr[10];
    int i, avg = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d 번 학생의 성적은? ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        avg += arr[i];
    }
    avg = avg / 10;
    printf("전체 학생의 평균은: %d \n", avg);

    for (i = 0; i < 10; i++)
    {
        printf("학생 %d ", i + 1);
        if (arr[i] >= avg)
        {
            printf("합격 \n");
        }
        else
        {
            printf("불합격 \n");
        }
    }
    return 0;
}