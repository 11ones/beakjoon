// 2022년 4월 23일 11:13:15
// 맞았습니다!!
// 1112KB
// 144ms
#include <stdio.h>

int main()
{
	for (int i = 1; i < 10000; i++)
	{
		int check = 0;
		for (int j = 1; j < 10000; j++)
		{
			if (i == j + j % 10 + j / 10 % 10 + j / 100 % 10 + j / 1000)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			printf("%d\n", i);
		}
	}
}