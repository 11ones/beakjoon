// 2021년 12월 16일 19:53:34
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>

int main() {
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    if (b>0) {
        if (a>0) {printf("1");}
        else {printf("2");}
    }
    else {
        if (a<0) {printf("3");}
        else {printf("4");}
    }
    return 0;}