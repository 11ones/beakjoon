// 2022년 4월 26일 19:06:08
// 맞았습니다!!
// 11860KB
// 104ms
#include <stdio.h>
#include <stdlib.h>

int arr[2500000];

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
	int m, n, dirt, size, countup, countdown, j, check = 0, height = 0, sum = 0;
    long long time = 12800000000;
	scanf("%d %d %d", &m, &n, &dirt);
	size = m * n;
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	qsort(arr, size, 4, compare);
	for (int i = arr[size - 1]; i <= arr[0]; i++)
	{
		countup = 0, countdown = 0;
		for (j = 0; j < size; j++)
		{
			if (arr[j] - i > 0)
				countup += arr[j] - i;
			else if (arr[j] - i < 0)
				countdown += arr[j] - i;
			if (-countdown > dirt + countup)
			{
				check = 1;
				break;
			}
		}
		long long timesav = countup * 2 - countdown;
		if (check == 0 && time >= timesav)
		{
			time = timesav;
			height = i;
		}
		else if (time <= timesav)
			break;
	}
	printf("%d %d", time, height);
}