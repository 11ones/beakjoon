// 2022년 3월 16일 15:56:28
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int a, sav, i = 0;
	while (1)
	{
		scanf("%d", &a);
		sav = (a % 10 + a / 10) % 10 + a % 10 * 10;
		i++;
		if (sav == i)
			break;
	}
	printf("%d", i);
}