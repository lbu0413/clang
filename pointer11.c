#include <stdio.h>

int main()
{
    int arr[2][3];

    printf("arr[0]: %p \n", arr[0]); // arr[0]은 arr[0][0]을 가리키는 포인터로 암묵적으로 타입 변환
    printf("arr[0][0]: %p \n", &arr[0][0]);

    printf("arr[1]: %p \n", arr[1]);
    printf("arr[1][0]: %p \n", &arr[1][0]);

    return 0;
}