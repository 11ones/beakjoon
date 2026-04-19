// 2022년 4월 11일 23:55:53
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[500000];
	int arr2[500000];
	int check = 0;
	int end = n/2;
	for (int i = 2; i <= n; i+=2)
		arr[i/2 - 1] = i;
	if (n % 2 == 1)
	{
		check = 1;
	}
	int k = 0;
	int i = 0;
	while (1)
	{
		while (1)
		{
			if (check == 0)
			{
				check = 1;
				arr[i] = 0;
				i++;
				if (i == end)
				{
					end = k;
					break;
				}
			}
			if (check == 1)
			{
				check = 0;
				arr2[k] = arr[i];
				i++;
				k++;
				if (i == end)
				{
					end = k;
					break;
				}
			}
		}
		for (int j = 0; j < end; j++)
			arr[j] = arr2[j];
		if (end == 1)
			break;
		i = 0;
		k = 0;
	}
	printf("%d", arr[0]);
}