// 2022년 3월 16일 21:18:46
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>

int sn(int a)
{
	if (a / 1000 == 0 && a / 100 != 0 && a % 10 - a / 10 % 10 != a / 10 % 10 - a / 100 || a == 1000)
		a = 0;
	else
		a = 1;
	return a;
}

int main()
{
	int x, check = 0;
	scanf("%d", &x);
	for (int i = 1; x>0; i++)
	{
		
		int a = sn(x);
		if (a == 1)
		{
			check++;
		}
		x--;
	}
	printf("%d", check);
}