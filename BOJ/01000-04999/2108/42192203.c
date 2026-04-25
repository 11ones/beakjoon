// 2022년 4월 19일 22:33:56
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	int arr[500001];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, compare);

	int sum = 0, max = 1, pmax = -5000;
	int num[8003] = { 0 };
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		num[arr[i] + 4000]++;
	}
	int check = 0;

	for (int i = arr[0]; i <= arr[n - 1]; i++)
	{
		if (num[i] > max)
		{
			check = 0;
			max = num[i];
			pmax = i - 4000;
			printf("%d %d\n", max, i);
		}
		else if (check <= 1 && num[i] == max)
			{
				check++;
				max = num[i];
				pmax = i - 4000;
				printf("%d %d\n", max, i);
			}
	}

	int m = round((double)sum / n);
	if (m == -0)
		m = 0;
	printf("\n\n%d\n%d\n%d\n%d",m , arr[n / 2], pmax, arr[n - 1] - arr[0]);
}