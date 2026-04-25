// 2022년 4월 21일 11:30:20
// 맞았습니다!!
// 5056KB
// 128ms
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arr[500001];
int num[8001] = { 0 };

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
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, 4, compare);

	int sum = 0, max = 1, pmax = -5000;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		num[arr[i] + 4000]++;
	}

	int check = 0;

	for (int i = 0; i < 8001; i++)
	{
		if (check <= 1 && num[i] == max)
		{
			check++;
			max = num[i];
			pmax = i - 4000;
		}
		else if (num[i] > max)
		{
			check = 1;
			max = num[i];
			pmax = i - 4000;
		}
	}

	int m = round((double)sum / n);
	printf("%d\n%d\n%d\n%d", m, arr[n / 2], pmax, arr[n - 1] - arr[0]);
}