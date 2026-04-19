// 2022년 4월 26일 22:07:51
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	while (1)
	{
		int x = sqrt(n);
		n -= x * x;
		count++;
		if (n == 0)
			break;
	}
	printf("%d", count);
}