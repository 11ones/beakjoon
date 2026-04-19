// 2022년 3월 16일 15:07:17
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}