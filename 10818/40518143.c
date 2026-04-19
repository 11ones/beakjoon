// 2022년 3월 16일 16:21:48
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main()
{
	int n, max, min, arr[100000];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
			max = arr[i + 1];
		else
			min = arr[i + 1];
	}
	printf("%d %d", min, max);
}