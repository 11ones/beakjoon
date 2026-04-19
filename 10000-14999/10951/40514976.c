// 2022년 3월 16일 15:28:37
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	int a[100], b[100];
	int i = 0;
	while (i < 40)
	{
		scanf(" %d %d", &a[i], &b[i]);
		printf("%d\n", a[i] + b[i]);
		i++;
	}
}