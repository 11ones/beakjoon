// 2022년 4월 7일 12:07:13
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	int s, r = 0;
	scanf("%d", &s);
	char arr[1000];
	for (int i = 0; i < s; i++)
	{
		scanf("%d", &r);
		scanf("%s", arr);
		for(int j=0;j<strlen(arr);j++)
			for (int k = 0; k < r; k++)
			{
				printf("%c", arr[j]);
			}
		printf("\n");
	}
}