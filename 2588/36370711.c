// 2021년 12월 16일 18:53:08
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a*(b%10));
    printf("%d\n", a*((b%100)-(b%10))/10);
    printf("%d\n", a*(b-(b%100))/100);
    printf("%d\n", a*b);
    return 0;
}