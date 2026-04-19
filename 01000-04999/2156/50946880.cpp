// 2022년 10월 25일 19:50:42
// 맞았습니다!!
// 2100KB
// 48ms
#include <iostream>
using namespace std;

int dp[10002];
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
		int max = 0;
		for (int j = 1; j < i - 2; j++)
		{
			if (max < dp[j])
				max = dp[j];
		}
		if (arr[i - 1] + max > dp[i - 2])
		{
			dp[i] = max + arr[i - 1] + arr[i];
		}
		else
		{
			dp[i] = dp[i - 2] + arr[i];
		}
	}
	if (dp[x] > dp[x - 1])
		dp[x + 1] = dp[x];
	else
		dp[x + 1] = dp[x - 1];
	return dp[x + 1];
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