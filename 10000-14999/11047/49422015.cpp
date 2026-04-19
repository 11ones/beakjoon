// 2022년 9월 20일 19:03:20
// 맞았습니다!!
// 1112KB
// 36ms
#include <stdio.h>

int arr[10];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count = 0;
	for (; n > 0; n--)
	{
		if (m - arr[n - 1] >= 0)
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