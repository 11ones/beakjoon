// 2022년 3월 16일 15:16:13
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main() {
	while (1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d ", a + b);
	}
}