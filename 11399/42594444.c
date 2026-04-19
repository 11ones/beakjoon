// 2022년 4월 29일 00:28:22
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
#include <stdlib.h>

int c(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, c);
	int k = n, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] * k--;
	}
	printf("%d", sum);
}