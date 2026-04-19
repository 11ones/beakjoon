// 2022년 3월 16일 16:57:56
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, max = -10000000, min = 10000000, arr[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		else if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d", min, max);
}