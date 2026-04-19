// 2022년 3월 16일 16:21:33
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>

int main()
{
	int n, max, min, arr[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
			max = arr[i + 1];
		else
			min = arr[i + 1];
	}
	printf("%d %d", min, max);
}