// 2022년 4월 26일 22:33:48
// 시간 초과
// KB
// ms
#include <stdio.h>

int fibonacci(int n)
{
    if (n == -1)
        return 0;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        printf("%d %d\n", fibonacci(x - 1), fibonacci(x));
    }
}