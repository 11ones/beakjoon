// 2022년 5월 9일 00:25:25
// 맞았습니다!!
// 1112KB
// 20ms
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
}