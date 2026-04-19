// 2022년 4월 25일 11:08:51
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>
#include<stdlib.h>

int comparelil(void const* a, void const* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int comparebig(void const* a, void const* b)
{
	if (*(int*)a > *(int*)b)
		return -1;
	else if (*(int*)a < *(int*)b)
		return 1;
	else
		return 0;
}

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int arr[2][50];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[0][i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[1][i]);
	qsort(arr[0], n, 4, comparelil);
	qsort(arr[1], n, 4, comparebig);
	for (int i = 0; i < n; i++)
		sum += arr[0][i] * arr[1][i];
	printf("%d", sum);
}