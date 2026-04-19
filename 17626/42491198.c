// 2022년 4월 26일 22:23:56
// 맞았습니다!!
// 1128KB
// 0ms
#include <stdio.h>
#include <math.h>

int main()
{
	int n, check = 0;
	scanf("%d", &n);
	double x = sqrt(n);
	if (x - (int)x == 0)
	{
		check = 1;
		printf("1");
	}
	else
	{
		for (int i = 0; i < 224; i++)
		{
			x = sqrt(n - i * i);
			if (x - (int)x == 0)
			{
				check = 1;
				printf("2");
				break;
			}
			else
			{
				for (int j = 0; j < 224; j++)
				{
					x = sqrt(n - i * i - j * j);
					if (x - (int)x == 0)
					{
						check = 2;
						break;
					}
				}
			}
		}
	}
	if (check == 2)
		printf("3");
	if (check == 0)
		printf("4");
}