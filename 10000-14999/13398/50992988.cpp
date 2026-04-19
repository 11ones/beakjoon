// 2022년 10월 26일 23:38:55
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int dp[100001];
bool dpp[100001];
int arr[100001];

int find(int x)
{
	dp[1] = arr[1];
	dpp[x + 1] = 1;

	for (int i = 2; i <= x; i++)
	{
		if (arr[i] < 0)
		{
			dpp[i] = 1;
		}
		if (dp[i - 1] > 0)
			dp[i] = dp[i - 1] + arr[i];
		else
		{
			dp[i] = arr[i];
		}
	}

	int maxdp = -10000;
	for (int i = 1; i <= x; i++)
	{
		if (maxdp < dp[i])
			maxdp = dp[i];
	}

	int sav1 = -10000;
	int sav2 = -10000;
	for (int i = 1; i <= x + 1; i++)
	{
		if (dpp[i] == 1)
		{
			if (maxdp < sav2 + sav1)
				maxdp = sav2 + sav1;
			sav2 = sav1;
			sav1 = dp[i - 1];
		}
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