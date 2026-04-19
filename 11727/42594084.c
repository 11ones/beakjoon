// 2022년 4월 29일 00:19:42
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[1001];
	a[0] = 1, a[1] = 1;
	for (int i = 0; i < n - 1; i++)
	{
		a[i + 2] = (a[i + 1] + a[i] * 2) % 10007;
	}
	printf("%d", a[n]);
}