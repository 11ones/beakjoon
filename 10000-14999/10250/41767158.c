// 2022년 4월 10일 12:34:28
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
		if (c / m < 10)
			printf("%d0%d\n", c % m, c / m + 1);
		else
			printf("%d%d\n", c % m, c / m + 1);
		
	}
}