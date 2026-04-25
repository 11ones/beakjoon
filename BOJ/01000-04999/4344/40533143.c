// 2022년 3월 16일 20:36:23
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main()
{
	int c, n;

	scanf_s("%d", &c);
	short arr[1000][1000];
	for (int i = 0; i < c; i++)
	{
		float sum = 0;
		int check = 0;
		scanf_s("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &arr[i][j]);
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