// 2022년 10월 25일 19:55:41
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int dp[1001];

int find(int x)
{
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= x; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	return dp[x];
}

int main()
{
	int x;
	cin >> x;
	cout << find(x);
}