// 2022년 4월 7일 13:03:17
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int alphabet[26];
	char arr[1000000];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'a')
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
	for (int i = 0; i < 26; i++)
		if (max <= alphabet[i])
		{
			max = alphabet[i];
			max_alphabet = i;
		}
	short check = 0;
	for (int i = 0; i < 26; i++)
		if (max == alphabet[i] && i != max_alphabet)
			check++;
	if (check == 0)
		printf("%c", max_alphabet + 'A');
	else
		printf("?");
}