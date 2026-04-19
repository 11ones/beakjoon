// 2022년 4월 26일 21:04:26
// 맞았습니다!!
// 8636KB
// 116ms
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arrm[100000][21];
int n, m;

typedef struct
{
	char arrn[21];
	int x;
}Arrn;

Arrn arrs[100000];

int compare(const void* first, const void* second)
{
	return strcmp(((Arrn*)first)->arrn, ((Arrn*)second)->arrn);
}

int find(char arr[], int s, int e)
{
	int mid = (s + e) / 2;
	int x = strcmp(arrs[mid].arrn, arr);
	if (x > 0)
		return find(arr, s, mid - 1);
	else if (x < 0)
		return find(arr, mid + 1, e);
	else
		return mid;
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arrm[i]);
		strcpy(arrs[i].arrn, arrm[i]);
		arrs[i].x = i;
	}
	char arr[21];
	qsort(arrs->arrn, n, sizeof(arrs[0]), compare);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%s", arr);
		if (arr[0] >= '0' && arr[0] <= '9')
		{
			int num = 0, digit = 1;
			for (int j = 0; j < strlen(arr); j++)
			{
				num += (arr[strlen(arr) - j - 1] - '0') * digit;
				digit *= 10;
			}
			printf("%s\n", arrm[num - 1]);
		}
		else
		{
			printf("%d\n", arrs[find(arr, 0, n - 1)].x + 1);
		}
	}
}