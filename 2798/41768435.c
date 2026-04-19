// 2022년 4월 10일 13:28:13
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>

int main()
{
	int t, m, max = 0;
	scanf("%d %d", &t, &m);
	int arr[100];
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < t - 2; i++)
	{
		for (int j = i + 1; j < t - 1; j++)
		{
			for (int k = j + 1; k < t; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= m && max < arr[i] + arr[j] + arr[k])
				{
					max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	printf("%d", max);
}