// 2022년 3월 16일 15:14:13
// 맞았습니다!!
// 1112KB
// 4ms
#include <stdio.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int arr[10000], answer[10000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < x)
		{
			answer[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i < j; i++)
		printf("%d ", answer[i]);
}