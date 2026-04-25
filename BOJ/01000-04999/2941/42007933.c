// 2022년 4월 15일 15:23:12
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	gets(arr);
	int count = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'c')
			if (arr[i + 1] == '=' || arr[i + 1] == '-')
				i++;
		if (arr[i] == 'd')
		{
			if (arr[i + 1] == '-')
				i++;
			if (arr[i + 1] == 'z' && arr[i + 2] == '=')
				i += 2;
		}
		if (arr[i] == 'l' && arr[i + 1] == 'j')
			i++;
		if (arr[i] == 'n' && arr[i + 1] == 'j')
			i++;
		if (arr[i] == 's' && arr[i + 1] == '=')
			i++;
		if (arr[i] == 'z' && arr[i + 1] == '=')
			i++;
		count++;
	}
	printf("%d", count);
}