// 2022년 4월 11일 20:10:19
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int min = 1;
	if (a > b)
	{
		int sav = a;
		a = b;
		b = sav;
	}

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
			min = i;
	}
	printf("%d\n%d", min, a * b / min);
}