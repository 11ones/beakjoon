// 2022년 4월 10일 13:03:50
// 시간 초과
// KB
// ms
#include<stdio.h>

int main()
{
	int t, i = 0;
	scanf("%d", &t);
	for (;; i++)
	{
		if (i / 10 == 0)
		{
			if (i + i == t)
				break;
		}
		if (i / 100 == 0)
		{
			if (i + i / 10 + i % 10 == t)
				break;
		}
		if (i / 1000 == 0)
		{
			if (i + i / 100 + i / 10 % 10 + i % 10 == t)
				break;
		}
		if (i / 10000 == 0)
		{
			if (i + i / 1000 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
		if (i / 100000 == 0)
		{
			if (i + i / 10000 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
		if (i / 1000000 == 0)
		{
			if (i + i / 100000 + i / 10000 % 10 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
	}
	printf("%d", i);
}