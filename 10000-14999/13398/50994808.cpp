// 2022년 10월 27일 00:36:23
// 맞았습니다!!
// 3196KB
// 424ms
#include <iostream>
#include <queue>
using namespace std;

int dp[100001];
int dpp[100001];
int arr[100001];

int find(int x)
{
	dp[1] = arr[1];

	for (int i = 2; i <= x; i++)
	{
		if (arr[i] < 0)
			dpp[i] = 1;

		if (dp[i - 1] > 0)
		{
			if (arr[i - 1] < 0)
				dpp[i - 1] = 2;
			dp[i] = dp[i - 1] + arr[i];
		}
		else
		{
			dp[i] = arr[i];
		}
	}
	if (dpp[x] == 0)
		dpp[x + 1] = 1;

	int maxdp = -10000;
	for (int i = 1; i <= x; i++)
	{
		if (maxdp < dp[i])
			maxdp = dp[i];
	}

	int sav1 = -10000;
	int sav2 = -10000;
	queue <int> qsav1;
	queue <int> qsav2;
	bool check = 0;
	for (int i = 1; i <= x + 1; i++)
	{
		if (dpp[i] == 1)
		{
			check = 0;
			sav2 = sav1;
			sav1 = dp[i - 1];
			while (!qsav1.empty())
			{
				if (maxdp < sav1 - qsav1.front())
					maxdp = sav1 - qsav1.front();
				qsav1.pop();
			}
			if (maxdp < sav2 + sav1)
			{
				maxdp = sav2 + sav1;
			}
		}
		if (dpp[i] == 2)
		{
			while (!qsav1.empty())
			{
				if (maxdp < dp[i - 1] - qsav1.front())
					maxdp = dp[i - 1] - qsav1.front();
				qsav2.push(qsav1.front());
				qsav1.pop();
			}
			while (!qsav2.empty())
			{
				qsav1.push(qsav2.front());
				qsav2.pop();
			}
			if (maxdp < dp[i - 1] + sav1)
			{
				maxdp = dp[i - 1] + sav1;
			}
			qsav1.push(arr[i]);
			check = 1;
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