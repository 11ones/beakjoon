// 2022년 4월 11일 21:18:16
// 메모리 초과
// KB
// ms
#include<stdio.h>
#include<stdlib.h>

int static compare(const void* a, const void* b)
{
	if (*(short*)a > *(short*)b)
		return 1;
	else if (*(short*)a < *(short*)b)
		return -1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	short arr[10000000];
	for (int i = 0; i < n; i++)
		scanf("%hd", &arr[i]);

	qsort(arr, n, sizeof(short), compare);
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%hd\n", arr[i]);
}