// 2023년 2월 17일 17:30:35
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int dp[41] = { 0,1, };
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << " " << n - 2;
}