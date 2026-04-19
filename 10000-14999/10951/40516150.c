// 2022년 3월 16일 15:48:42
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main()
{
	int a, b;
	while(scanf_s("%d %d", &a, &b)!=EOF)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}