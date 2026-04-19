// 2022년 4월 8일 18:17:39
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
	int arr[10000];
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, x, sizeof(int), compare);
	int len = arr[x - 1];
	int count = 0;
	int i;
	for (i = 2; i < arr[0]; i++)
	{
		count = 0;
		for (int j = 0; j < x; j++)
		{
			count += arr[j] / len;
		}
		if (count > n)
			break;
		len = arr[x - 1] / i;
	}

	printf("\n");

	for (int j = 0; j < x; j++)
	{
		len = arr[x - j - 1]/i+1;
		count = 0;
		for (int j = 0; j < x; j++)
		{
			count += arr[j] / len;
		}
		if (count < n)
			break;
	}
	printf("%d", len - 1);
}