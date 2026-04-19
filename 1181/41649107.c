// 2022년 4월 7일 18:07:40
// 시간 초과
// KB
// ms
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char arr[20000][51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf(" %s", arr[i]);
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (strlen(arr[j]) > strlen(arr[j + 1]))
			{
				char temp[51];
				strcpy(temp, arr[j + 1]);
				strcpy(arr[j + 1], arr[j]);
				strcpy(arr[j], temp);
			}
			else if (strlen(arr[j]) == strlen(arr[j + 1]))
				for (int k = 0; k < strlen(arr[j]); k++)
					if (arr[j][k] > arr[j + 1][k])
					{
						char temp[51];
						strcpy(temp, arr[j + 1]);
						strcpy(arr[j + 1], arr[j]);
						strcpy(arr[j], temp);
					}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		char pre[51];
		if (strcmp(arr[i], pre) != 0)
			printf("%s\n", arr[i]);
		strcpy(pre, arr[i]);
	}
}