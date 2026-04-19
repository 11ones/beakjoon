// 2022년 4월 7일 12:55:08
// 런타임 에러 (Segfault)
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int alphabet[26];
	char arr[10000];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			alphabet[arr[i] - 'a']++;
		}
		else
		{
			alphabet[arr[i] - 'A']++;
		}
	}
	int max = alphabet[0];
	int max_alphabet = 0;
	for(int i=0;i<26;i++)
		if (max <= alphabet[i])
		{
			max = alphabet[i];
			max_alphabet = i;
		}
	printf("%c", max_alphabet + 'A');
}