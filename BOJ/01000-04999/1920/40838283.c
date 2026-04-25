// 2022년 3월 22일 22:25:11
// 시간 초과
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr1[100000];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
		sum += arr1[i];
	}
	sum /= n;
	int nb = 0, ns = 0;
	int big[100000];
	int small[100000];
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] > sum)
			big[nb++] = arr1[i];
		else
			small[ns++] = arr1[i];
	}
	int m;
	int arr2[100000];
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int check = 0;
	for (int i = 0; i < m; i++)
	{
		if (arr2[i] > sum)
		{
			for (int j = 0; j < nb; j++)
			{
				if (arr2[i] == big[j])
				{
					check = 1;
					break;
				}
			}
		}
		else
		{
			for (int j = 0; j < ns; j++)
			{
				if (arr2[i] == small[j])
				{
					check = 1;
					break;
				}
			}
		}
		if (check == 1)
		{
			printf("1\n");
			check = 0;
		}
		else
			printf("0\n");
	}
}