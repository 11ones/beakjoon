// 2022년 3월 16일 21:14:09
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int sn(int a)
{
	if (a / 1000 == 0 && a / 100 != 0 && a % 10 - a / 10 % 10 != a / 10 % 10 - a / 100 || a == 1000)
		a = 0;
	else
		a = 1;
	return a;
}

int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i < 10000; i++)
	{
		int a = sn(x);
		if (a == 1)
			break;
		else
			x--;
	}
	printf("%d", x);
}