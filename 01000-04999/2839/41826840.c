// 2022년 4월 11일 19:14:40
// 틀렸습니다
// KB
// ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a = n % 15;
	int add = 0;
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
		break;
	default:
		add = -1;
		break;
	}
	if (add == -1)
		printf("%d", add);
	else
		printf("%d", n / 15 * 3 + add);
}