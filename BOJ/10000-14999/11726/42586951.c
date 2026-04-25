// 2022년 4월 28일 22:15:13
// 시간 초과
// KB
// ms
#include <stdio.h>

unsigned long long fibonacci(int n) {
    if ((0 == n) || (1 == n))
        return n;
    else
        return fibonacci(n - 1)%10007 + fibonacci(n - 2)%10007;
}

int main()
{
	int n;
	scanf("%d", &n);
    printf("%lld", fibonacci(n + 1));
}