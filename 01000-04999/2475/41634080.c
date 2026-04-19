// 2022년 4월 7일 13:58:50
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		int a;
		scanf("%d", &a);
		sum += a * a;
	}
	printf("%d", sum % 10);
}