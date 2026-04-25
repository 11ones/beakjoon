// 2022년 1월 29일 14:41:20
// 맞았습니다!!
// 1112KB
// 356ms
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        printf("%d\n", b + c);
    }
    return 0;
}