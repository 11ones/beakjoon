// 2022년 10월 25일 20:09:31
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
using namespace std;

int dp[1001];
int arr[1001];

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