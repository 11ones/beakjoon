// 2022년 4월 25일 11:23:33
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int arr[25000];

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
	int m, n, dirt, size, countup, countdown, j, check = 0, time = 12800000, height = 0, sum = 0;
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
			if ( -countdown > dirt)
			{
				check = 1;
				break;
			}
		}
		int timesav = countup * 2 - countdown;
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