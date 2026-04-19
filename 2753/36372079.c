// 2021년 12월 16일 19:42:24
// 컴파일 에러
// KB
// ms
#include <stdio.h>
int main() {
    int a=0;
    scanf("%d", &a);
    if (((a%4)==0&&(a%100)!==0)||(a%400)==0) {printf("1");}
    else {printf("0");}
    return 0;}