// 2022년 3월 17일 12:02:30
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char arr[1000][51];
	char parentheses[2] = { '(',')' };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int check = 0;
		scanf(" %s", arr[i]);
		for (int j = 0; j < strlen(arr[i]); j++)
		{
			if (check < 0)
				break;
			if (arr[i][j] == parentheses[0])
				check++;
			else
				check--;
		}
		if (check == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}