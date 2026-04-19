// 2022년 3월 16일 14:53:54
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main() {
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    int reward = 0;
    if (a == b && b == c)
        reward = 10000 + a * 1000;
    else if (a == b || b == c)
        reward = 1000 + b * 100;
    else if (c == a)
        reward = 1000 + a * 100;
    else
    {
        if (b < c)
            b = c;
        if (a < b)
            a = b;
        reward = a * 100;
    }
    printf("%d", reward);
}