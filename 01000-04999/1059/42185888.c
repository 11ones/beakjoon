// 2022년 4월 19일 20:31:38
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return 0;
}

int find(int* a, int b, int start, int end)
{
	int mid = (start + end) / 2;
	if (a[end] < b || a[start] > b || start > end)
		return 0;
	if (a[mid] > b)
	{
		return find(a, b, start, mid - 1);
	}
	else if (a[mid] < b)
	{
		return find(a, b, mid + 1, end);
	}
	else if (a[mid] == b)
		if (a[mid - 1] == b)
			return mid - 1;
		else
			return mid;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[5000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int a;
	scanf("%d", &a);

	arr[n] = a;

	qsort(arr, n + 1, 4, compare);

	int loc = find(arr, a, 0, n);
	if (loc == 0)
	{
		int right = arr[loc + 1] - arr[loc] - 1;
		int left = arr[loc] - 1;
		if (left == -1)
			printf("0");
		else
			printf("%d", left * right + left + right);
	}
	else
	{
		int right = arr[loc + 1] - arr[loc] - 1;
		int left = arr[loc] - arr[loc - 1] - 1;
		if (left == -1 || right == -1)
			printf("0");
		else if (left == 0)
			printf("%d", right);
		else if (right == 0)
			printf("%d", left);
		else
			printf("%d", left * right + left + right);
	}
}