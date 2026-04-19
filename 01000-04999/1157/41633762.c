// 2022년 4월 7일 13:52:50
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int alphabet[27]={};

    
	char arr[1000001];
	gets(arr);
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