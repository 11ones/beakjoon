// 2022년 3월 16일 16:05:47
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int a, sav1, sav2, i = 0;
	scanf("%d", &a);
	sav1 = a;
	while (1)
	{
		sav2 = ((sav1 % 10 + sav1 / 10) % 10) + ((sav1 % 10) * 10);
		i++;
		if (sav2 == a)
			break;
		sav1 = sav2;
	}
	printf("%d", i);
}