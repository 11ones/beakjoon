// 2022년 4월 24일 21:34:01
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

long long x, n;
long long arr[10000000];

int compare(const void* first, const void* second)
{
	if (*(long long*)first > *(long long*)second)
		return -1;
	else if (*(long long*)first < *(long long*)second)
		return 1;
	else
		return 0;
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
	long long first = 0, mid = 0, last = arr[0];
	int check = 0;
	while (first <= last)
	{
		
		mid = (first + last) / 2;
		long long count = 0;
		for (int i = 0; i < x; i++)
			if (arr[i] - mid > 0)
				count += arr[i] - mid;
			else
				break;
		if (first == last)
		{
			ans = mid;
			break;
		}
		if (count < n)
			last = mid - 1;
		else if(count > n)
			first = mid + 1;
		else
		{
			ans = mid;
			break;
		}
	}

	printf("%lld", ans);
}