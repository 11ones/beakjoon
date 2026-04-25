// 2022년 3월 16일 15:02:17
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d", i + 1, a + b);
	}
}