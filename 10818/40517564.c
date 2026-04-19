// 2022년 3월 16일 16:12:42
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>

int main()
{
	int n, arr[100], max, min;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[i + 1])
			max = arr[i + 1];
		else
			min = arr[i + 1];
	}
	printf("%d %d", min, max);
}