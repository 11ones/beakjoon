// 2022년 4월 17일 20:53:36
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>
#include<stdlib.h>

int compare(const void* first, const void* second)
{

	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	printf("%d", arr[0] * arr[n - 1]);
}