// 2022년 4월 7일 18:25:32
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
	int answer[20000];
	for (int i = 0; i < n; i++)
		answer[i] = i;
	for(int i=0;i<n;i++)

	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
		{
			int len1 = strlen(arr[j]);
			int len2 = strlen(arr[j + 1]);
			if (len1 > len2)
			{
				int temp = answer[j + 1];
				answer[j + 1] = answer[j];
				answer[j] = temp;
			}
			else if (len1 == len2)
				for (int k = 0; k < strlen(arr[j]); k++)
					if (arr[j][k] > arr[j + 1][k])
					{
						int temp = answer[j + 1];
						answer[j + 1] = answer[j];
						answer[j] = temp;
					}
		}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		char pre[51];
		if (strcmp(arr[answer[i]], pre) != 0)
			printf("%s\n", arr[i]);
		strcpy(pre, arr[answer[i]]);
	}
}