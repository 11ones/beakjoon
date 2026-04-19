// 2022년 3월 24일 15:03:56
// 컴파일 에러
// KB
// ms
#include <stdio.h>
#include<algorithm>

int find(int* a, int b, int start, int end)
{
	int mid = (start + end) / 2;

	if (a[end] < b || a[start] > b || start > end)
		return 0;
	if (a[mid] > b)
	{
		return find(a, b, start, mid - 1);
	}
	else if (a[mid] < b)
	{
		return find(a, b, mid + 1, end);
	}
	else if (a[mid] == b)
		return b;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr1[100000];
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
		if (arr1[i] == 0)
			check = 1;
	}
	Sort(arr1, arr1 + n);

	int m;
	int arr2[100000];
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d\n", ((find(arr1, arr2[i], 0, n - 1) && arr2[i] != 0) || (arr2[i] == 0 && check == 1)) ? 1 : 0);
	}
}