// 2022년 10월 26일 21:00:21
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int dp[100001];
int arr[100001];

int find(int x)
{
	dp[1] = arr[1];

	for (int i = 2; i <= x; i++)
	{
		if (dp[i - 1] > 0)
			dp[i] = dp[i - 1] + arr[i];
		else
			dp[i] = arr[i];
	}

	int maxdp = 0;
	for (int i = 1; i <= x; i++)
	{
		if (maxdp < dp[i])
			maxdp = dp[i];
	}
	return maxdp;
}

int main()
{
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++)
		cin >> arr[i];
	cout << find(x);
}