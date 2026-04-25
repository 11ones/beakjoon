// 2022년 4월 7일 14:02:50
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
	b = b % 10 * 100 + b / 10 % 10 * 10 + b / 100;
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
}