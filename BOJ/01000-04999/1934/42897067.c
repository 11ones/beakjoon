// 2022년 5월 5일 23:30:04
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int GCD(int a, int b)
{
    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int q = 0; q < t; q++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / GCD(a, b));
    }
}