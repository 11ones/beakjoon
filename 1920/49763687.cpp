// 2022년 9월 27일 20:26:32
// 맞았습니다!!
// 1776KB
// 72ms
#include <stdio.h>
#include<algorithm>
using namespace std;

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
	sort(arr1, arr1 + n);

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