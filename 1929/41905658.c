// 2022년 4월 13일 12:13:09
// 시간 초과
// KB
// ms
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <= 2)
		printf("2 ");
	if (a % 2 == 0)
		a++;
	for (int i = a; i <= b; i+=2)
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
			printf("%d\n", i);
	}
}