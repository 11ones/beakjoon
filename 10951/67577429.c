// 2023년 10월 5일 21:11:32
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

int main() {
    for (;;) {
        int q1 = 0, q2 = 0;
        if (scanf("%d %d", &q1, &q2) == EOF)
            break;
        printf("%d\n", q1 + q2);
    }
}