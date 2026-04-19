// 2022년 4월 11일 19:41:57
// 맞았습니다!!
// 1116KB
// 0ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a = n % 15;
	int add = 0;
	if (n / 15 == 0)
		switch (a)
		{
		case 0:
			add = 0;
			break;
		case 3:
		case 5:
			add = 1;
			break;
		case 6:
		case 8:
		case 10:
			add = 2;
			break;
		case 9:
		case 11:
		case 13:
			add = 3;
			break;
		case 12:
		case 14:
			add = 4;
			break;
		default:
			add = -1;
			break;
		}
	else
	{
		switch (a)
		{
		case 0:
			add = 0;
			break;
		case 3:
			add = 1;
			break;
		case 6:
			add = 2;
			break;
		case 9:
			add = 3;
			break;
		case 12:
			add = 4;
			break;


		case 5:
			add = 1;
			break;
		case 8:
			add = 2;
			break;
		case 11:
			add = 3;
			break;
		case 14:
			add = 4;
			break;
		case 2:
			add = 2;
			break;


		case 10:
			add = 2;
			break;
		case 13:
			add = 3;
			break;
		case 1:
			add = 1;
			break;
		case 4:
			add = 2;
			break;
		case 7:
			add = 3;
			break;
		default:
			add = -1;
			break;
		}
	}
	if (add == -1)
		printf("%d", add);
	else
		printf("%d", n / 15 * 3 + add);
}