// 2022년 9월 27일 20:27:18
// 맞았습니다!!
// 6860KB
// 468ms
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

int findleft(int b, int s, int e, int middle)
{
	int m = (s + e) / 2;
	if (m == e && b == arr[m])
	{
		return m;
	}
	if (arr[m] == b)
	{
		return findleft(b, s, m, middle);
	}
	else if (arr[m] < b)
	{
		return findleft(b, m + 1, middle, middle);
	}
}

int findright(int b, int s, int e, int middle)
{
	int m = (s + e) / 2;
	if (m == e && b == arr[m])
	{
		return m;
	}
	if (arr[m] == b)
	{
		return findright(b, m + 1, e, middle);
	}
	else if (arr[m] > b)
	{
		return findright(b, middle, m - 1, middle);
	}
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
		int r = findright(b, m, end, m);
		int l = findleft(b, 0, m, m);
		return r - l;
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
			printf("%d ", x + 1);
	}
}