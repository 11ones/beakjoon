// 2022년 4월 22일 23:49:14
// 맞았습니다!!
// 1192KB
// 8ms
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
		count += arr[i] / mid;

	if (count < n)
	{
		long long countin = 0;
		for (int i = 0; i < x; i++)
			countin += arr[i] / (mid - 1);

		if (countin >= n)
			return mid - 1;

		return find(start, mid);
	}
	else if (count > n)
	{
		return find(mid + 1, end);
	}
	else
	{
		long long countin = 0;
		for (int i = 0; i < x; i++)
			countin += arr[i] / (mid + 1);

		if (countin < n)
			return mid;
		
		return find(mid + 1, end);
	}
}

int main()
{
	scanf("%lld %lld", &x, &n);
	int check = 1;
	for (int i = 0; i < x; i++)
	{
		scanf("%lld", &arr[i]);
	}
	int check_num = arr[0];
	for (int i = 0; i < x; i++)
		if (arr[i] != check_num)
			check = 0;
	qsort(arr, x, sizeof(long long), compare);
	long long ans;
	if (check == 1 && x == n)
		ans = arr[0];
	else
		ans = find(1, arr[0]);
	printf("%lld", ans);
}