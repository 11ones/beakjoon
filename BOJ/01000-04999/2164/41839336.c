// 2022년 4월 11일 23:00:08
// 틀렸습니다
// KB
// ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[500000];
	int arr2[500000];
	for (int i = 1; i <= n; i++)
		arr[i - 1] = i;
	int k = 0;
	int i = 0;
	int end = n;
	while (1)
	{
		while (1)
		{
			arr[i] = 0;
			i++;
			if (i == end)
			{
				end = k;
				break;
			}
			arr2[k] = arr[i];
			i++;
			k++;
			if (i == end)
			{
				end = k;
				break;
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