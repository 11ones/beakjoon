// 2021년 12월 16일 20:06:16
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    if (a!=0){if (b>=45) {printf("%d %d", a, b-45);} else {printf("%d %d", a-1, b+15);}}
    else {if (b>=45) {printf("0 %d", b-45); else {printf("23 %d", b+15);}}
    return 0;}