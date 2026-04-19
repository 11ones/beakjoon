// 2022년 4월 26일 22:03:33
// 맞았습니다!!
// 6780KB
// 144ms
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char address[21];
	char password[21];
}Arr;

Arr arrs[100000];

int compare(const void* first, const void* second)
{
	return strcmp(((Arr*)first)->address, ((Arr*)second)->address);
}

int find(char arr[], int s, int e)
{
	int mid = (s + e) / 2;
	int x = strcmp(arrs[mid].address, arr);
	if (x > 0)
		return find(arr, s, mid - 1);
	else if (x < 0)
		return find(arr, mid + 1, e);
	else
		return mid;
}

int main()
{
	int n, m, k = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", arrs[i].address);
		scanf("%s", arrs[i].password);
	}
	qsort(arrs->address, n, sizeof(arrs[0]), compare);
	for (int i = 0; i < m; i++)
	{
		char arr[21];
		scanf("%s", arr);
		printf("%s\n", arrs[find(arr, 0, n - 1)].password);
	}
}