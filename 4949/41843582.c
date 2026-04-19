// 2022년 4월 12일 00:51:22
// 출력 초과
// KB
// ms
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[2001];
	int i = 0;
	while (1)
	{
		gets(arr);
		if (arr[strlen(arr)] == EOF)
			break;
		int check = 0;
		int lil = 0;
		int big = 0;
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == '(')
				lil++;
			if (arr[j] == ')')
				lil--;
			if (arr[j] == '[')
				big++;
			if (arr[j] == ']')
				big--;
			if (lil < 0 || big < 0)
				break;
			if (arr[j] == '.')
				break;
		}
		if (lil == 0 && big == 0)
			printf("yes\n");
		else
			printf("no\n");
		i++;
	}
}