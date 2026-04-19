// 2022년 5월 12일 12:34:19
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <array>

using namespace std;

array <int, 301> dp;
array <int, 301> arr;

void find(int x)
{
	dp[1] = arr[1];
	if (x >= 2)
		dp[2] = arr[2] + dp[1];
	if (x >= 3 && arr[1] > arr[2])
		dp[3] = arr[3] + arr[1];
	else
		dp[3] = arr[3] + arr[2];
	for (int i{ 4 }; i <= x; i++)
	{
		if (dp[i - 2] > arr[i - 1] + dp[i - 3])
			dp[i] = arr[i] + dp[i - 2];
		else
			dp[i] = arr[i] + arr[i - 1] + dp[i - 3];
	}
}

int main()
{
	int x{ 0 };
	cin >> x;
	for (int i{ 1 }; i <= x; i++)
	{
		cin >> arr[i];
	}
	find(x);
	cout << dp[x];
}