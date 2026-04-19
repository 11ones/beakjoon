// 2022년 4월 7일 22:31:16
// 맞았습니다!!
// 1116KB
// 8ms
#include<stdio.h>
#include<string.h>


int main()
{
	int x;
	scanf("%d", &x);
	int count = 0;
	int i = 665;
	while (1)
	{
		if (i % 10 == 6 && i / 10 % 10 == 6 && i / 100 % 10 == 6)
			count++;
		else if (i / 10 % 10 == 6 && i / 100 % 10 == 6 && i / 1000 % 10 == 6)
			count++;
		else if (i / 100 % 10 == 6 && i / 1000 % 10 == 6 && i / 10000 % 10 == 6)
			count++;
		else if (i / 1000 % 10 == 6 && i / 10000 % 10 == 6 && i / 100000 % 10 == 6)
			count++;
		if (count == x)
			break;
		i++;
	}
	printf("%d", i);
}