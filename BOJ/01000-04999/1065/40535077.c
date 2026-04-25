// 2022년 3월 16일 21:05:37
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int sn(int a)
{
	if (a / 10 == 0)
		a = 1;
	if (a / 100 == 0)
		if (a - a % 10 == a % 10 - a / 10)
			a = 1;
	if (a / 1000 == 0)
		if (a - a % 10 == a % 10 - a / 10 % 10 == a / 10 % 10 - a / 100)
			a = 1;
	if (a == 1000)
		a = 0;
	return a;
}

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 1; i < 10000; i++)
	{
		int a = sn(x);
		if (a = 1)
			break;
		else
			x--;
	}
	printf("%d", x);
}