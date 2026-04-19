// 2022년 4월 26일 22:40:44
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
    arr[1] = 0;
    arr[2] = 1;
    for (int i = 1; i < 40; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        printf("%d %d\n", arr[x],arr[x + 1]);
    }
}