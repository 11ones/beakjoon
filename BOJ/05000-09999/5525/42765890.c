// 2022년 5월 2일 23:07:20
// 50점
// 3068KB
// 0ms
#include <stdio.h>
#include <string.h>

char arr[1000001];
char IOI[1000001];

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
			if (strncmp(arr+i*(sizeof(char)), IOI, n * 2 + 1) == 0)
				count++;
		printf("%d", count);
	}
}