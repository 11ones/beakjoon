// 2022년 4월 7일 14:09:54
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	short alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;
	char arr[100];
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
		if (alphabet[arr[i] - 'a'] == -1)
			alphabet[arr[i] - 'a'] = i;
	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);
}