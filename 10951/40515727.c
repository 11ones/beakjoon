// 2022년 3월 16일 15:41:52
// 컴파일 에러
// KB
// ms
#include <stdio.h>
#include <conio.h> 

int main()
{
	for (int i = 0; i < 5; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		if (!kbhit())
			break;
	}
}