// 2022년 3월 16일 15:21:04
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	int a[5], b[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i] + b[i]);
	}
}