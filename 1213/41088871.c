// 2022년 3월 28일 01:03:37
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>
#include<string.h>


int main()
{
	char str[51], answer[51];
	scanf("%s", str);

	int alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = 0;


	for (int i = 0; i < strlen(str); i++)
	{
		alphabet[str[i] - 65]++; //A=65
	}

	int checkodd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] % 2 == 1)
			checkodd++;
	}

	if (checkodd > 1)
	{
		printf("I'm Sorry Hansoo");
	}
	else
	{
		if (checkodd == 1)
		{
			for (int i = 0; i < 26; i++)
			{
				if (alphabet[i] % 2 == 1)
				{
					answer[strlen(str) / 2] = i + 65;
					alphabet[i]--;
					break;
				}
			}
		}
		
		for (int i = 0; i < strlen(str)/2; i++)
		{
			int j = 0;
			for (j; j < 26; j++)
			{
				if (alphabet[j] != 0)
					break;
			}
			answer[i] = j + 65;
			answer[strlen(str) - i - 1] = j + 65;
			alphabet[j] -= 2;
		}

		answer[strlen(str)] = '\0';

		printf("%s", answer);
	}
}