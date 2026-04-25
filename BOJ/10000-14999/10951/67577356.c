// 2023년 10월 5일 21:10:06
// 컴파일 에러
// KB
// ms
#include<stdio.h>

int main() {
    for (;;) {
        int q1 = 0, q2 = 0;
        if (scanf_s("%d %d", &q1, &q2) == EOF)
            break;
        printf("%d\n", q1 + q2);
    }
}