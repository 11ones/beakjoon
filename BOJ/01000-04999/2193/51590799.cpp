// 2022년 11월 11일 16:58:30
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

long long dp[91]{ 0, 1, 1, };

void pn(int x)
{
	for (int i = 3; i < x; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	pn(x);
	cout << dp[x];
}