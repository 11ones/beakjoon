// 2022년 1월 29일 14:40:00
// 틀렸습니다
// KB
// ms
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        printf("%d", b + c);
    }
    return 0;
}