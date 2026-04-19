// 2022년 4월 11일 20:04:40
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int n = 1, d1 = 1, d2 = 1;
	for (int i = 1; i <= a; i++)
		n *= i;
	for (int i = 1; i <= b; i++)
		d1 *= i;
	for (int i = 1; i <= a - b; i++)
		d2 *= i;
	printf("%d", n / d1 / d2);
}