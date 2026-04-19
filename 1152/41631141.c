// 2022년 4월 7일 12:43:12
// 런타임 에러 (Segfault)
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[1000];
	gets(arr);
	int num = 0;
	for (int i = 0; i < strlen(arr); i++)
		if (arr[i] == ' ')
			num++;
	if (arr[0] == ' ')
		num--;
	if (arr[strlen(arr) - 1] == ' ')
		num--;
	printf("%d", num + 1);
}