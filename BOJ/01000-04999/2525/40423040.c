// 2022년 3월 14일 21:18:19
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c;
    printf("%d %d", (a+b/60)%24, b - 60*(b/60));
    return 0;
}