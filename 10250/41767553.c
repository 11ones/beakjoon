// 2022년 4월 10일 12:51:47
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int t, m, n, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &m, &n, &c);
		c -= 1;
		if (c / m + 1 < 10)
			printf("%d0%d\n", c % m + 1, c / m + 1);
		else
			printf("%d%d\n", c % m + 1, c / m + 1);
	}
}