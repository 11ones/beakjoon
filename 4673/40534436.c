// 2022년 3월 16일 20:55:13
// 맞았습니다!!
// 1112KB
// 180ms
#include <stdio.h>

int sn(int a)
{
	if (a / 100 == 0)
		a = a + a % 10 + a / 10;
	else if (a / 1000 == 0)
		a = a + a % 10 + a / 10 % 10 + a / 100;
	else
		a = a + a % 10 + a / 10 % 10 + a / 100 % 10 + a / 1000;
	return a;
}


int main()
{
	
	for (int i = 1; i < 10000; i++)
	{
		int check = 0;
		for (int j = 1; j < 10000; j++)
		{
			if (i == sn(j))
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