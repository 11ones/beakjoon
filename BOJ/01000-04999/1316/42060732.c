// 2022년 4월 16일 20:39:19
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	int check[26] = { 0, };
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 26; j++)
			check[j] = 0;
		char arr[100];
		scanf("%s", arr);
		int pcheck = 0;
		check[arr[0] - 'a']++;
		for (int j = 1; j < strlen(arr); j++)
		{
			if (arr[j] != arr[j - 1])
			{
				if (check[arr[j] - 'a'] != 0)
					pcheck++;
				check[arr[j] - 'a']++;
			}
		}
		if (pcheck == 0)
				count++;
	}
	printf("%d", count);
}