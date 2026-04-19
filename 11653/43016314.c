// 2022년 5월 9일 00:25:09
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 2;; i++)
	{
		while (x % i == 0)
		{
			x /= i;
			printf("%d\n", i);
		}
		if (x == 1)
			break;
	}
