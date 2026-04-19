// 2022년 4월 11일 19:57:50
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int x = 0;
	if ((v - a) % (a - b) != 0)
		x = 1;
	printf("%d", (v - a) / (a - b) + x + 1);
}