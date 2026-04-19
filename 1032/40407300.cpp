// 2022년 3월 14일 17:01:17
// 컴파일 에러
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int amount;
	scanf_s("%d ", &amount);
	char dir[50][100];
	char answer[100];
	for (int i = 0; i < amount; i++)
	{
		gets_s(dir[i],sizeof(dir[i]));
	}

	int a = 0;
	strcpy_s(answer, dir[0]);

	for (int i = 0; i < amount - 1; i++)
	{
		for (int j = 0; j < strlen(dir[i]); j++)
		{
			if (dir[i][j] != dir[i + 1][j])
			{
				answer[j] = '?';
			}
		}
	}
	printf("%s", answer);
}