// 2022년 4월 11일 23:36:59
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[500];
	int arr2[500];
	for (int i = 1; i <= n; i++)
		arr[i - 1] = i;
	int k = 0;
	int i = 0;
	int end = n;
	int check = 0;
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