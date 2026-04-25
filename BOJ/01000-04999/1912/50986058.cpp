// 2022년 10월 26일 21:02:35
// 맞았습니다!!
// 2800KB
// 28ms
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

	int maxdp = -10000;
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