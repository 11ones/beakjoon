// 2022년 3월 16일 20:36:57
// 맞았습니다!!
// 4896KB
// 0ms
#include <stdio.h>

int main()
{
	int c, n;

	scanf("%d", &c);
	int arr[1000][1000];
	for (int i = 0; i < c; i++)
	{
		float sum = 0;
		int check = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > sum / n)
				check++;
		}
		printf("%0.3f%%\n", (float)check / n * 100);
	}

}