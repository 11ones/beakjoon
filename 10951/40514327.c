// 2022년 3월 16일 15:17:49
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}
}