// 2022년 4월 7일 22:13:42
// 출력 초과
// KB
// ms
#include<stdio.h>
#include<string.h>


int main()
{
	char arr[6];
	scanf("%s", arr);
	while (arr != "0")
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
	}
}