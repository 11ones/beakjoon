// 2022년 5월 26일 00:42:24
// 맞았습니다!!
// 6852KB
// 312ms
#include<stdio.h>
#include<stdlib.h>

int arr[500000];

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int find(int b, int s, int e, int end)
{
	int m = (s + e) / 2;
	if (arr[e] < b || arr[s] > b || s > e)
		return -1;
	if (arr[m] > b)
	{
		return find(b, s, m - 1, end);
	}
	else if (arr[m] < b)
	{
		return find(b, m + 1, e, end);
	}
	else if (arr[m] == b)
	{
		return 1;
	}
	else
		return -1;
}

int main()
{
	int n, m;
	int arr2[500000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int end = n - 1;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < m; i++)
	{
		int x = find(arr2[i], 0, n - 1, end);
		if (x == -1)
			printf("0 ");
		else
			printf("%d ", x);
	}
}