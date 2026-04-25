// 2022년 4월 12일 21:43:52
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include<stdio.h>
#include<stdlib.h>



int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int findu(int* a, int b, int s, int e, int end)
{
	int m = (s + e) / 2;
	if (a[e] < b || a[s] > b || s > e)
		return -1;
	if (a[m] > b)
	{
		return findu(a, b, s, m - 1, end);
	}
	else if (a[m] < b)
	{
		return findu(a, b, m + 1, e, end);
	}
	else if (a[m] == b)
	{
		while (1)
		{
			if (m == end)
				return end;
			if (a[m] != b)
				return m - 1;
			m++;
		}
	}
	else
		return -1;
}

int findd(int* a, int b, int s, int e)
{
	int m = (s + e) / 2;
	if (a[e] < b || a[s] > b || s > e)
		return -1;
	if (a[m] > b)
	{
		return findd(a, b, s, m - 1);
	}
	else if (a[m] < b)
	{
		return findd(a, b, m + 1, e);
	}
	else if (a[m] == b)
	{
		while (1)
		{
			if (m == 0)
				return 0;
			if (a[m] != b)
				return m + 1;
			m--;
		}
	}
	else
		return -1;
}

int main()
{
	int n, m;
	int arr1[500], arr2[500];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int end = n - 1;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	qsort(arr1, n, sizeof(int), compare);

	for (int i = 0; i < m; i++)
	{
		int x = findu(arr1, arr2[i], 0, n - 1, end);
		int y = findd(arr1, arr2[i], 0, n - 1);
		if (x == -1 && y == -1)
			printf("0 ");
		else
			printf("%d ", x - y + 1);
	}
}