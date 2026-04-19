// 2022년 4월 29일 01:23:40
// 시간 초과
// KB
// ms
#include <stdio.h>

int arr[100001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int sum = 0;
		for (int j = a; j <= b; j++)
			sum += arr[j];
		printf("%d\n", sum);
	}
}