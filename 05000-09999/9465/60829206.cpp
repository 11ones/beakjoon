// 2023년 5월 16일 00:44:29
// 맞았습니다!!
// 12384KB
// 308ms
#include <iostream>
using namespace std;

int max3(int a, int b, int c)
{
	int tmp = a;
	if (b >= tmp) tmp = b;
	if (c >= tmp) tmp = c;
	return tmp;
}

int findmax(int n, pair<int, int>* dp, int* arr1, int* arr2)
{
	dp[0].first = arr1[0];
	dp[0].second = arr2[0];
	for (int i = 1; i < n; i++)
	{
		if (i == 1)
		{
			if (dp[0].first <= arr1[1] + dp[0].second)
				dp[1].first = arr1[1] + dp[0].second;
			else
				dp[1].first = dp[0].first;

			if (dp[0].second <= arr2[1] + dp[0].first)
				dp[1].second = arr2[1] + dp[0].first;
			else
				dp[1].second = dp[0].second;

		}
		else
		{
			dp[i].first = max3(dp[i - 1].first,
				dp[i - 1].second + arr1[i],
				dp[i - 2].second + arr1[i]);

			dp[i].second = max3(dp[i - 1].second,
				dp[i - 1].first + arr2[i],
				dp[i - 2].first + arr2[i]);
		}
	}

	int max = 0;
	if (dp[n - 1].first >= dp[n - 1].second)
		max = dp[n - 1].first;
	else
		max = dp[n - 1].second;
	return max;
}

int main()
{
	int t;
	cin >> t;
	for (int g = 0; g < t; g++)
	{
		int n;
		cin >> n;
		int* arr1 = new int[n];
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> arr2[i];
		}

		pair<int, int>* dp = new pair<int, int>[n] {};

		cout << findmax(n, dp, arr1, arr2) << '\n';
	}
}