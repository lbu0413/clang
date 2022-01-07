// 체중과 키를 입력받아 체질량 지수를 구하는 프로그램을 만들어 보세요.
// BMI = weight / height^2 단, 이 때 키의 단위는 cm가 아니고 m이다.
#include <stdio.h>

int main()
{
    float weight, height;
    printf("몸무게: ");
    scanf("%f", &weight);
    printf("키: ");
    scanf("%f", &height);

    printf("체질량(BMI): %f", weight / (height * height));
}