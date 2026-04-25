// 2022년 3월 17일 12:00:51
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char arr[100][51];
	char parentheses[2] = { '(',')' };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int check = 0;
		scanf("%s", arr[i]);
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
			printf("YES");
		else
			printf("NO");
	}
}