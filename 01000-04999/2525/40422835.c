// 2022년 3월 14일 21:14:52
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c;
    if (a != 0)
    {
        if (b >= 60)
        {
            printf("%d %d", a, b - 60);
        }
        else
        {
            printf("%d %d", a, b);
        }
    }
    else
    {
        if (b >= 60)
        {
            printf("0 %d", b - 60);
        }
        else
        {
            printf("23 %d", b);
        }
    }
    return 0;
}