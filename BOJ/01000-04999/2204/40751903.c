// 2022년 3월 21일 11:40:47
// 틀렸습니다
// KB
// ms
#include<stdio.h>
#include<string.h>

int main()
{
	while (1)
	{
		int n;
		char arr[1000][21];
		char first[21];
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
			scanf("%s", arr[i]);
		strcpy(first, arr[0]);

		for (int i = 0; i < n; i++)
		{
			int len = strlen(arr[i]);
			if (strlen(arr[i]) > strlen(first))
				len = strlen(first);

			for (int j = 0; j < len; j++)
			{
				char sav1 = first[j];
				if (first[j] < 97)
					sav1 += 32;

				char sav2 = arr[i][j];
				if (arr[i][j] < 97)
					sav2 += 32;

				if (sav1 > sav2)
				{
					strcpy(first, arr[i]);
					break;
				}
				else if (sav1 < sav2)
					break;
			}
		}
		printf("%s\n", first);
	}
}