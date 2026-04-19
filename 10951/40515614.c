// 2022년 3월 16일 15:39:48
// 출력 초과
// KB
// ms
#include <stdio.h>

int main()
{
	while(1)
	{
		int a, b, c;
		scanf("%d %d%c", &a, &b, &c);
		if (c != '\n')
			break;
		printf("%d\n", a + b);
	}
}