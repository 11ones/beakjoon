// 2022년 4월 18일 18:31:22
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		long long af = 1, bf = 1;
		if (b - a >= a)
		{
			for (int j = b - a + 1; j <= b; j++)
				af *= j;
			for (int j = 2; j <= a; j++)
				bf *= j;
		}
		else
		{
			for (int j = a + 1; j <= b; j++)
				af *= j;
			for (int j = 2; j <= b - a; j++)
				bf *= j;
		}
		printf("%lld", af / bf);
	}	
}