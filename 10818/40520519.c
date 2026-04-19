// 2022년 3월 16일 16:59:28
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	long n, max = -10000000, min = 10000000, arr[1000000];
	scanf("l%d", &n);
	for (long i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	for (long i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		else if (min > arr[i])
			min = arr[i];
	}
	printf("%ld %ld", min, max);
}