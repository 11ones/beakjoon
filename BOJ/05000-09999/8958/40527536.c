// 2022년 3월 16일 18:55:47
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int n, combo = 1, score[100];
	char ox[100][100];
	scanf("%d ", &n);
	for (int j = 0; j < n; j++)
	{
		gets(ox[j]);
		int k = strlen(ox[j]);
		if (ox[j][0] == 'O')
		{
			score[j] += combo;
			combo++;
		}
		for (int i = 1; i < k; i++)
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