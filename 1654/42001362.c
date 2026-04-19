// 2022년 4월 15일 12:41:14
// 틀렸습니다
// KB
// ms
#include<stdio.h>
#include<stdlib.h>

int static compare(const void* first, const void* second)
{
	
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

int main()
{
	int x, n;
	scanf("%d %d", &x, &n);
	long long arr[10000];
	for (int i = 0; i < x; i++)
	{
		scanf("%lld", &arr[i]);
	}
	qsort(arr, x, sizeof(long long), compare);
	printf("\n");

	long long max = 0;
	int count = 0;
	for (long long i = 1; i < arr[x - 1]; i++)
	{
		count = 0;
		for (int j = 0; j < x; j++)
		{
			count += arr[j] / i;
		}
		if (count >= n && max < i)
			max = i;
	}
	printf("%lld", max);
}