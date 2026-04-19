// 2022년 10월 25일 20:10:07
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int dp[1000001];
int arr[1000001];

int find(int x)
{
	dp[1] = 1;
	for (int i = 2; i <= x; i++)
	{
		int max = 0;
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j] && max < dp[j])
			{
				max = dp[j];
			}
		}
		if (max == 0)
			dp[i] = 1;
		else
			dp[i] = max + 1;
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