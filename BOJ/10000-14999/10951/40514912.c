// 2022년 3월 16일 15:27:30
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	int a[100], b[100];
	int i = 0;
	while (i < 5)
	{
		scanf(" %d %d", &a[i], &b[i]);
		printf("%d\n", a[i] + b[i]);
		i++;
	}
}