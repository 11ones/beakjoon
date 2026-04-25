// 2022년 3월 16일 15:00:38
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[100], b[100];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &a[i], &b[i]);
	for (int i = 0; i < n; i++)
		printf("Case #%d: %d", i, a[i] + b[i]);
}