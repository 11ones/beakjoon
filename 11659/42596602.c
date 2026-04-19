// 2022년 4월 29일 01:25:56
// 맞았습니다!!
// 1500KB
// 64ms
#include <stdio.h>

int arr[100001] = { 0 };

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] += arr[i - 1];
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", arr[b] - arr[a - 1]);
	}
}