// 2022년 3월 16일 17:02:02
// 맞았습니다!!
// 8804KB
// 196ms
#include <stdio.h>

int main()
{
	long n, max = -10000000, min = 10000000, arr[1000000];
	scanf("%ld", &n);
	for (long i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	for (long i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%ld %ld", min, max);
}