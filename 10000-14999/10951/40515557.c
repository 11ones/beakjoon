// 2022년 3월 16일 15:38:44
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++)
	{
		int a, b, c;
		scanf("%d %d", &a, &b);
		scanf("%c", &c);
		if (c != '\n')
			break;
		printf("%d\n", a + b);
	}
}