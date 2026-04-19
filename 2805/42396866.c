// 2022년 4월 24일 22:04:32
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

long long x, n, mid;
long long arr[1000000];

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
	mid = (start + end) / 2;

	long long count = 0;
	for (int i = 0; i < x; i++)
		if (arr[i] - mid > 0)
			count += arr[i] - mid;
		else
			break;

	if (start == end)
	{
		if (mid == 0)
			return 0;
		if (count < n)
			return mid - 1;
		else if (count == n)
			return mid;
		else
			return mid + 1;
	}
	if (count < n)
	{
		return find(start, mid - 1);
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
	ans = find(0, arr[0]);
	printf("%lld", ans);
}