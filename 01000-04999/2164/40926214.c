// 2022년 3월 24일 16:46:43
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a = 2;
	for (int i = 0; i < 18; i++)
	{
		if (n / a == 0)
			break;
		else
			a *= 2;
	}
	printf("%d", a / 2);
}