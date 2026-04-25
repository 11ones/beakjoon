// 2022년 3월 16일 16:13:15
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, arr[1000000], max, min;
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