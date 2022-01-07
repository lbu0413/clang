#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("전체크기: %lu \n", sizeof(arr));
    printf("총 열의 개수: %lu \n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("총 행의 개수: %lu \n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}