// 2022년 4월 13일 10:41:01
// 컴파일 에러
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
		if (a[e+m+1] == b)
			m = (e+m+1)/2;
		while (1)
		{
			m++;
			if (m == end + 1)
				return end;
			if (a[m] != b)
				return m - 1;
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
		if (a(m+s-1) == b)
			m = (m + s - 1) / 2;
		while (1)
		{
			m--;
			if (m == -1)
				return 0;
			if (a[m] != b)
				return m + 1;
		}
	}
	else
		return -1;
}

int main()
{
	int n, m;
	int arr1[500000], arr2[500000];
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