// 2022년 4월 23일 19:11:49
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int count = 0, a;

void countf(int x)
{
	if (a - x >= 0)
	{
		a -= x;
		count++;
	}
}

int main()
{
	scanf("%d", &a);
	int x = 64;
	for (int i = 0; i < 7; i++)
	{
		countf(x);
		x /= 2;
	}
	printf("%d", count);
}