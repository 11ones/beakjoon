// 2022년 4월 26일 19:53:00
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <string.h>

char arrn[100000][21];
char arrm[100000][21];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arrn[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%s", arrm[i]);
	}
	for (int i = 0; i < m; i++)
	{
		if (arrm[i][0] >= '0' && arrm[i][0] <= '9')
		{
			int num = 0, digit = 1;
			for (int j = 0; j < strlen(arrm[i]); j++)
			{
				num += (arrm[i][strlen(arrm[i]) - j - 1] - '0') * digit;
				digit *= 10;
			}
			printf("%s\n", arrn[num]);
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (strcmp(arrn[j], arrm[i]) == 0)
				{
					printf("%d\n", j + 1);
					break;
				}
			}
		}
	}
}