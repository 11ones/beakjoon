// 2022년 4월 7일 22:16:07
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>
#include<string.h>


int main()
{
	char arr[6];
	scanf("%s", arr);
	int x = arr[0] - '0';
	while (x != 0)
	{
		short check = 0;
		for (int i = 0; i < strlen(arr) / 2; i++)
			if (arr[i] != arr[strlen(arr) - i - 1])
			{
				check = 1;
				break;
			}
		if (check == 1)
			printf("no\n");
		else
			printf("yes\n");
		scanf("%s", arr);
		x = arr[0] - '0';
	}
}