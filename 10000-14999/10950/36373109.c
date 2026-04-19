// 2021년 12월 16일 20:20:14
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
    int a=0, b=0, c=0;
    scanf("%d", &a);
    for(int i=1;i<a;i++) {
        scanf("%d %d", &b, &c);
        printf("%d",b+c);
    }
    return 0;}