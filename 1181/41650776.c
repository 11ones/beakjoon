// 2022년 4월 7일 18:40:45
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char arr[200][51];
	scanf("%d", &n);
	int answer[200];
	for (int i = 0; i < n; i++)
		answer[i] = i;
	for (int i = 0; i < n; i++)
		scanf(" %s", arr[i]);
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
		{
			int len1 = sizeof(arr[answer[j]]);
			int len2 = sizeof(arr[answer[j + 1]]);
			if (len1 > len2)
			{
				int temp = answer[j + 1];
				answer[j + 1] = answer[j];
				answer[j] = temp;
			}
			else if (len1 == len2)
				for (int k = 0; k < len1; k++)
					if (arr[answer[j]][k] > arr[answer[j + 1]][k])
					{
						int temp = answer[j + 1];
						answer[j + 1] = answer[j];
						answer[j] = temp;
					}
		}

	for (int i = 0; i < n; i++)
	{
		char pre[51] = {};
		if (strcmp(arr[answer[i]], pre) != 0)
			printf("%s\n", arr[answer[i]]);
		strcpy(pre, arr[answer[i]]);
	}
}