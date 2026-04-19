// 2022년 9월 20일 21:30:20
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int c(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	qsort(arr, n, 4, c);
	int k = n, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] * k--;
	}
	cout << sum;
}