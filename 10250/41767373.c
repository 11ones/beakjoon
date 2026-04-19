// 2022년 4월 10일 12:43:37
// 틀렸습니다
// KB
// ms
#include<stdio.h>

int main()
{
	int t, m, n, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &m, &n, &c);
		c -= 1;
		if (c / m < 10)
			printf("%d0%d", c % m + 1, c / m + 1);
		else
			printf("%d%d", c % m + 1, c / m + 1);
	}
}