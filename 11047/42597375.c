// 2022년 4월 29일 01:50:41
// 시간 초과
// KB
// ms
#include <stdio.h>

long long arr[10];

int main()
{
	long long n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i]);
	}
	int count = 0;
	for (; n > 0; n--)
	{
		if (m - arr[n - 1] > 0)
			break;
	}
	for (; n > 0; n--)
	{
		while (1)
		{
			m -= arr[n - 1];
			if (m <= 0)
				break;
			count++;
		}
		if ((m < 0 && n == 0) || m == 0)
			break;
		m += arr[n - 1];
	}
	printf("%d", count + 1);
}