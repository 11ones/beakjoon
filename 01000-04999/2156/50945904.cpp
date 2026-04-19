// 2022년 10월 25일 19:26:31
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int dp[10001];
int arr[10001];

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
	if (x == 1)
		return dp[1];
	if (dp[x] > dp[x - 1] && dp[x] > dp[x - 2])
		return dp[x];
	if (dp[x - 1] > dp[x - 2])
		return dp[x - 1];
	return dp[x - 2];
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