// 2022년 4월 22일 22:27:00
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>
int x, n;

int compare(const void* first, const void* second)
{
	
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

long long find(long long* a, long long start, long long end)
{
	
	long long mid = (start + end) / 2;
	if (start == end)
		return mid - 1;
	long long count = 0;
	for (int i = 0; i < x; i++)
		count += a[i] / mid;
	if (count < n)
	{
		long long countin = 0;
		for (int i = 0; i < x; i++)
			countin += a[i] / (mid - 1);
		if (countin == n)
		{
			return mid - 1;
		}
		return find(a, start, mid);
	}
	else if (count > n)
	{
		return find(a, mid + 1, end);
	}
	else if (count == n)
	{
		long long countin = 0;
		for (int i = 0; i < x; i++)
			countin += a[i] / (mid + 1);
		if (countin < n)
		{
			return mid;
		}
		return find(a, mid + 1, end);
	}
	else
		return 0;
}

int main()
{
	scanf("%d %d", &x, &n);
	long long arr[10000];
	for (int i = 0; i < x; i++)
		scanf("%lld", &arr[i]);
	qsort(arr, x, sizeof(long long), compare);
	long long ans = find(arr, 1, arr[0]);
	printf("%lld", ans);
}