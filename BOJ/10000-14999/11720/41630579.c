// 2022년 4월 7일 12:25:59
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	char arr[101];
	scanf(" %s", arr);

	int sum = 0;

	for (int i = 0; i < a; i++)
		sum += arr[i] - 48;
	
	printf("%d", sum);
}