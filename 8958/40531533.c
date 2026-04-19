// 2022년 3월 16일 20:11:12
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	int n, combo = 1, score[100];
	char ox[100][100];
	scanf("%d ", &n);
	for (int j = 0; j < n; j++)
	{
		score[j] = 0;
		combo = 1;
		gets(ox[j]);
		for (int i = 0; i < strlen(ox[j]); i++)
			if (ox[j][i] == 'O')
			{
				score[j] += combo;
				combo++;
			}
			else
			{
				combo = 1;
				continue;
			}
	}
	for (int j = 0; j < n; j++)
		printf("%d\n", score[j]);
}