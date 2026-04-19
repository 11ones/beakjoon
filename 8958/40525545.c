// 2022년 3월 16일 18:18:10
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, score = 0, combo = 1;
	char ox[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf(" %c", &ox[i]);
	if (ox[0] == 'O')
	{
		score += combo;
		combo++;
	}
	for (int i = 1; i < n; i++)
		if (ox[i] == 'O')
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