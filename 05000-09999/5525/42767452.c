// 2022년 5월 2일 23:32:34
// 50점
// 20648KB
// 0ms
#include <stdio.h>
#include <string.h>

char arr[10000001];
char IOI[10000001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	IOI[0] = 'I';
	scanf("%s", arr);
	if (n >= 500000)
		printf("0");
	else
	{
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			IOI[2 * i + 1] = 'O';
			IOI[2 * i + 2] = 'I';
		}
		for (int i = 0; i < m - n * 2; i++)
			if (arr[i] == 'I' && arr[i + 1] == 'O')
				if (strncmp(arr + i * (sizeof(char)), IOI, n * 2 + 1) == 0)
					count++;
		printf("%d", count);
	}
}