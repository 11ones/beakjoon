// 2022년 3월 22일 21:54:34
// 시간 초과
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long nn;
	long long odd[100000], even[100000];
	int nodd = 0, neven = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &nn);
		if (nn % 2 == 0)
			even[neven++] = nn;
		else
			odd[nodd++] = nn;
	}
	int m;
	long long arr[100000];
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%lld", &arr[i]);
	}
	int check = 0;
	for (int i = 0; i < m; i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = 0; j < neven; j++)
			{
				if (arr[i] == even[j])
				{
					check = 1;
					break;
				}
			}
		}
		else
		{
			for (int j = 0; j < nodd; j++)
			{
				if (arr[i] == odd[j])
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