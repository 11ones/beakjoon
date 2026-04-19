// 2022년 4월 19일 20:46:31
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[5000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, compare);

	int sum = arr[0], max = 0, pmax = 0;
	int count = 1, countsav = 0;
	int check = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
			count++;
		if (arr[i] != arr[i - 1])
		{
			countsav = count;
			count = 0;
		}
		sum += arr[i];
		if (countsav == max && check <= 1)
		{
			max = countsav;
			pmax = i;
			check++;
		}
		else if (countsav > max)
		{
			max = countsav;
			pmax = i;
			check = 0;
		}
	}
	printf("%.0lf\n%d\n%d\n%d", (double)sum / n, arr[n / 2], arr[pmax], arr[n - 1] - arr[0]);
}