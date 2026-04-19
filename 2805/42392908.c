// 2022년 4월 24일 20:37:45
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

long long x, n;
long long arr[10000];

int compare(const void* first, const void* second)
{
	if (*(long long*)first > *(long long*)second)
		return -1;
	else if (*(long long*)first < *(long long*)second)
		return 1;
	else
		return 0;
}

long long find(long long start, long long end)
{
	long long mid = (start + end) / 2;
	if (start == end)
		return mid - 1;

	long long count = 0;
	for (int i = 0; i < x; i++)
		if (arr[i] - mid > 0)
			count += arr[i] - mid;
	if (count < n)
	{
		return find(start, mid);
	}
	else if (count > n)
	{
		return find(mid + 1, end);
	}
	else
		return mid;
}

int main()
{
	scanf("%lld %lld", &x, &n);
	for (int i = 0; i < x; i++)
	{
		scanf("%lld", &arr[i]);
	}
	qsort(arr, x, sizeof(long long), compare);
	long long ans;
	ans = find(1, arr[0]);
	printf("%lld", ans);
}