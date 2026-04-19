// 2022년 4월 26일 22:54:27
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[50];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 0; i < 39; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
            printf("0 1\n");
        else if (x == 0)
            printf("1 0\n");
        else
            printf("%d %d\n", arr[x - 1], arr[x]);
    }
}