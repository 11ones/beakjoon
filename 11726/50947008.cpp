// 2022년 10월 25일 19:53:57
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int dp[1001];

int find(int x)
{
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= x; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[x];
}

int main()
{
	int x;
	cin >> x;
	cout << find(x);
}