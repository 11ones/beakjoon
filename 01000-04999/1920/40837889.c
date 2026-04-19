// 2022년 3월 22일 22:20:15
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long arr1[100000];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr1[i]);
		sum += arr1[i];
	}
	sum /= n;
	int nb = 0, ns = 0;
	int big[50001];
	int small[50001];
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] > sum)
			big[nb++] = arr1[i];
		else
			small[ns++] = arr1[i];
	}
	int m;
	long long arr2[100000];
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%lld", &arr2[i]);
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