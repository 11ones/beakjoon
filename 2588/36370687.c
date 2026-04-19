// 2021년 12월 16일 18:52:19
// 컴파일 에러
// KB
// ms
#include <stdio.h
int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a*(b%10));
    printf("%d\n", a*((b%100)-(b%10))/10);
    printf("%d\n", a*(b-(b%100))/100);
    printf("%d\n", a*b);
    return 0;
}