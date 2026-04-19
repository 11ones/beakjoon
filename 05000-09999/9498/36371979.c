// 2021년 12월 16일 19:38:17
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
int main() {
    int a=0;
    scanf("%d", &a);
    if (a>=90) {printf("A");}
    else if (a>=80&&a<90) {printf("B");}
    else if (a>=70&&a<80) {printf("C");}
    else if (a>=60&&a<70) {printf("D");}
    else {printf("F");}
    return 0;}