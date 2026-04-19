// 2022년 3월 16일 18:13:07
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>

int main()
{
	int n, score = 0, combo = 1;
	char ox[80];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%c", &ox[i]);
	if (ox[0] == 'O')
	{
		score += combo;
		combo++;
	}
	for (int i = 1; i < n; i++)
		if (ox[i] == ox[i - 1] && ox[i] == 'O')
		{
			score += combo;
			combo++;
		}
		else
		{
			combo = 1;
			continue;
		}
	printf("%d", score);
}