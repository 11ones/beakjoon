// 2022년 4월 19일 11:31:41
// 틀렸습니다
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
	int arr[500000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, compare);

	int sum = 0, max = 0, pmax = 0;
	int count = 0;
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i - 1] && i != 0)
			count++;
		sum += arr[i];
		if (count == max && check == 0 && i != 0)
		{
			max = count;
			pmax = i;
			check = 1;
		}
		if (count > max)
		{
			max = count;
			pmax = i;
			check = 0;
		}
	} 
	printf("%.0lf\n%d\n%d\n%d", (double)sum / n, arr[n / 2], arr[pmax], arr[n - 1] - arr[0]);
}