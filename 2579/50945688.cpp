// 2022년 10월 25일 19:20:06
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int dp[301];
int arr[301];

int find(int x)
{
	dp[1] = arr[1];
	dp[2] = arr[2] + dp[1];
	if (arr[1] > arr[2])
	{
		dp[3] = arr[3] + arr[1];
	}
	else
	{
		dp[3] = arr[3] + arr[2];
	}
	for (int i = 4; i <= x; i++)
	{
		if (arr[i - 1] + dp[i - 3] > dp[i - 2])
		{
			dp[i] = dp[i - 3] + arr[i - 1] + arr[i];
		}
		else
		{
			dp[i] = dp[i - 2] + arr[i];
		}
	}
	return dp[x];
}

int main()
{
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		cin >> arr[i];
	}

	cout << find(x);
}