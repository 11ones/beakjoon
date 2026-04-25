// 2021년 12월 16일 18:15:11
// 틀렸습니다
// KB
// ms
#include <stdio.h>
int main() {
    int a=0, b=0, c=0;
    scanf("%d %d %d",&a, &b, &c);
    printf("%d",(a+b)%c);
    printf("%d",((a%c)+(b%c))%c);
    printf("%d",(a*c)%c);
    printf("%d",((a%c)*(b%c))%c);
    return 0;
    }