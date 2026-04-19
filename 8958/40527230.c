// 2022년 3월 16일 18:49:39
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, combo = 1;
	char ox[100][100];
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
		gets(ox[j]);
		int score = 0, k = 0;
		{
			k++;
		}
		if (ox[j][0] == 'O')
		{
			score += combo;
			combo++;
		}
		for (int i = 1; i < k; i++)
			if (ox[j][i] == 'O')
			{
				score += combo;
				combo++;
			}
			else
			{
				combo = 1;
				continue;
			}
		printf("%d\n", score);
	}

}