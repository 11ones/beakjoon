// 2022년 3월 22일 21:37:32
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int nn;
	int odd[100000], even[100000];
	int nodd = 0, neven = 0;
	for (int i = 0; i < n; i++)
	{
		if (scanf("%d", &nn) % 2 == 0)
			even[neven++] = nn;
		else
			odd[nodd++] = nn;
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
		if (arr2[i] % 2 == 0)
		{
			for (int j = 0; j < neven; j++)
			{
				if (arr2[i] == even[j])
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
				if (arr2[i] == odd[j])
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