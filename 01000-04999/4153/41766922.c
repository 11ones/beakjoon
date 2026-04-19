// 2022년 4월 10일 12:23:17
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	while (a != 0 || b != 0 || c != 0)
	{
		if (a > b)
		{
			int sav = a;
			a = b;
			b = sav;
		}
		if (a > c)
		{
			int sav = c;
			c = a;
			a = sav;
		}
		if (b > c)
		{
			int sav = c;
			c = b;
			b = sav;
		}
		if (a*a + b*b == c*c)
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}