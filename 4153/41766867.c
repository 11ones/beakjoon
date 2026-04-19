// 2022년 4월 10일 12:21:04
// 틀렸습니다
// KB
// ms
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
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

	while (a != 0 || b != 0 || c != 0)
	{
		if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}