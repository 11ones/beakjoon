// 2022년 3월 16일 16:24:32
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, max = 0, min = 0, arr[1000000];
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