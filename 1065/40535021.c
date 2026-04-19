// 2022년 3월 16일 21:04:46
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int sn(int a)
{
	if (a / 10 == 0)
		a = true;
	if (a / 100 == 0)
		if (a - a % 10 == a % 10 - a / 10)
			a = true;
	if (a / 1000 == 0)
		if (a - a % 10 == a % 10 - a / 10 % 10 == a / 10 % 10 - a / 100)
			a = true;
	if (a == 1000)
		a = false;
	return a;
}

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 1; i < 10000; i++)
	{
		bool a = sn(x);
		if (a = true)
			break;
		else
			x--;
	}
	printf("%d", x);
}