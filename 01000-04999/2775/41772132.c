// 2022년 4월 10일 15:12:20
// 틀렸습니다
// KB
// ms
#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int arr[15][15];
	for (int i = 0; i < 15; i++)
	{
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int sum = 0;
			for (int l = 0; l <= j; l++)
			{
				sum += arr[i - 1][l];
			}
			arr[i][j] = sum;
		}
	}

	for (int i = 0; i < t; i++)
	{
		int k, n;
		scanf("%d %d", &k, &n);
		printf("%d", arr[k][n]);
	}
}