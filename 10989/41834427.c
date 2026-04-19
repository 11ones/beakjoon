// 2022년 4월 11일 21:38:48
// 맞았습니다!!
// 1112KB
// 2636ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[10000] = {0};
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		arr[a - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		for (int j = arr[i]; j > 0; j--)
			printf("%lld\n", i + 1);
	}
}