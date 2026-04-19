// 2022년 4월 22일 21:49:28
// 시간 초과
// KB
// ms
int compare(const void* first, const void* second)
{
	
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

long long find(long long* a, long long start, long long end, int x, int n)
{
	long long mid = (start + end) / 2;
	if (start == end)
		return mid - 1;

	long long count = 0;
	for (int i = 0; i < x; i++)
		count += a[i] / mid;
	if (count < n)
		return find(a, start, mid, x, n);
	else if (count > n)
		return find(a, mid + 1, end, x, n);
	else if (count == n)
	{
		while (count == n)
		{
			mid++;
			count = 0;
			for (int i = 0; i < x; i++)
				count += a[i] / mid;
		}
		return mid - 1;
	}
	else
		return 0;
}

int main()
{
	int x, n;
	scanf("%d %d", &x, &n);
	long long arr[100000];
	for (int i = 0; i < x; i++)
		scanf("%lld", &arr[i]);
	qsort(arr, x, sizeof(long long), compare);
	long long ans = find(arr, 1, arr[0], x, n);
	printf("%lld", ans);
}