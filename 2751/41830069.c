// 2022년 4월 11일 20:20:34
// 맞았습니다!!
// 43964KB
// 456ms
#include<stdio.h>
#include<stdlib.h>

int static compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)b < *(int*)a)
		return -1;
	else 
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[10000000];
	for (int i = 0; i < n ; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}