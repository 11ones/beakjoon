// 2022년 4월 23일 14:18:36
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int arr[25000];

int main()
{
	int m, n, dirt, size;
	int sum = 0;
	scanf("%d %d %d", &m, &n, &dirt);
	size = m * n;
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	int countup, countdown;
	int j, check = 0;
	int time = 12'800'000, height = 0;
	for (int i = 0; i <= 256; i++)
	{
		countup = 0, countdown = 0;
		for (j = 0; j < size; j++)
		{
			if (arr[j] - i > 0)
				countup += arr[j] - i;
			else if (arr[j] - i < 0)
				countdown += arr[j] - i;
			if (countdown > dirt)
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
	}
	printf("%d %d", time, height);
}