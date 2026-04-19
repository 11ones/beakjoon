// 2022년 4월 26일 21:43:40
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr1[500000][21];
char arr2[500000][21];

int compare1(const void* first, const void* second)
{
	return strcmp((char*)first, (char*)second);
}

int find1(char arr[], int s, int e)
{
	if (s > e)
		return -1;
	int mid = (s + e) / 2;
	int x = strcmp(arr1[mid], arr);
	if (x > 0)
		return find1(arr, s, mid - 1);
	else if (x < 0)
		return find1(arr, mid + 1, e);
	else
		return mid;
}

int compare2(const void* first, const void* second)
{
	return strcmp((char*)first, (char*)second);
}

int find2(char arr[], int s, int e)
{
	if (s > e)
		return -1;
	int mid = (s + e) / 2;
	int x = strcmp(arr2[mid], arr);
	if (x > 0)
		return find2(arr, s, mid - 1);
	else if (x < 0)
		return find2(arr, mid + 1, e);
	else
		return mid;
}


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%s", arr2[i]);
	}
	qsort(arr1, n, sizeof(arr1[0]), compare1);
	qsort(arr2, m, sizeof(arr2[0]), compare2);
	if (n > m)
	{
		for (int i = 0; i < m; i++)
		{
			int x = find1(arr2[i], 0, n - 1);
			if (x != -1)
				printf("%s\n", arr2[i]);
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			int x = find2(arr1[i], 0, m - 1);
			if (x != -1)
				printf("%s\n", arr1[i]);
		}
	}
}