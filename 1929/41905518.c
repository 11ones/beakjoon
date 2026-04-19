// 2022년 4월 13일 12:08:14
// 시간 초과
// KB
// ms
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int check = 0;
		for (int j = 2; j < a; j++)
		{
			if (i % j == 0)
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