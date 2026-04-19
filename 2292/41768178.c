// 2022년 4월 10일 13:19:50
// 맞았습니다!!
// 1112KB
// 60ms
#include<stdio.h>

int main()
{
	int t, a, j;
	scanf("%d", &t);
	for (int i = 1;; i++)
	{
		if (t == 1)
		{
			j = 1;
			break;
		}
		a = 0;
		for (j = 1; j < i + 1; j++)
			a += j;
		if ((t - 2) / (6 * a) == 0)
			break;
	}
	printf("%d", j);
}