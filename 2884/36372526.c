// 2021년 12월 16일 19:58:24
// 틀렸습니다
// KB
// ms
#include <stdio.h>
int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    if (b>=45) {printf("%d %d", a, b-45);}
    else {printf("%d %d", a-1, b+15);}
    return 0;}