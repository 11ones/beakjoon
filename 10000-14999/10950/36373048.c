// 2021년 12월 16일 20:18:13
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
    int a=0;
    scanf("%d", &a);
    for(int i=0;i<a;i++) {
        int b=0, c=0;
        scanf("%d %d", &b, &c);
        printf("%d",b+c);
    }
    return 0;}