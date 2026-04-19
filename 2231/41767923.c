// 2022년 4월 10일 13:08:27
// 맞았습니다!!
// 1116KB
// 8ms
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
		else if (i / 100 == 0)
		{
			if (i + i / 10 + i % 10 == t)
				break;
		}
		else if (i / 1000 == 0)
		{
			if (i + i / 100 + i / 10 % 10 + i % 10 == t)
				break;
		}
		else if (i / 10000 == 0)
		{
			if (i + i / 1000 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
		else if (i / 100000 == 0)
		{
			if (i + i / 10000 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
		else if (i / 1000000 == 0)
		{
			if (i + i / 100000 + i / 10000 % 10 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10 == t)
				break;
		}
		else
		{
			i = 0;
			break;
		}
	}
	printf("%d", i);
}