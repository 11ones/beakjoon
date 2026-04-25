// 2023년 2월 20일 15:05:27
// 맞았습니다!!
// 2412KB
// 8ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < k; i++) sum += arr[i];
	int max = sum;
	for (int i = k; i < n; i++)
	{
		sum = sum + arr[i] - arr[i - k];
		if (sum > max) max = sum;
	}
	cout << max;
}