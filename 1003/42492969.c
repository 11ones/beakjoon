// 2022년 4월 26일 22:52:47
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[42];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 0; i < 40; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
            printf("0 1\n");
        else if (x == 1)
            printf("1 0\n");
        else
            printf("%d %d\n", arr[x - 1], arr[x]);
    }
}