// 2022년 5월 4일 23:19:31
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
#include <stdlib.h>

int arr[10];

int c(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > *(int*)b)
		return -1;
	else
		return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int q = 0; q < t; q++)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
		}
		qsort(arr, 10, 4, c);
		printf("%d\n", arr[2]);
	}
}