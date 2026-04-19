// 2023년 2월 19일 20:20:19
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int dp[21 * 21 * 21];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			for (int k = 0; k <= 20; k++)
			{
				if (i <= 0 || j <= 0 || k <= 0)
				{
					dp[i * 21 * 21 + j * 21 + k] = 1;
				}
				else if (i < j && j < k)
				{
					dp[i * 21 * 21 + j * 21 + k] =
						dp[i * 21 * 21 + j * 21 + k - 1]
						+ dp[i * 21 * 21 + (j - 1) * 21 + k - 1]
						- dp[i * 21 * 21 + (j - 1) * 21 + k];
				}
				else
				{
					dp[i * 21 * 21 + j * 21 + k] =
						dp[(i - 1) * 21 * 21 + j * 21 + k]
						+ dp[(i - 1) * 21 * 21 + (j - 1) * 21 + k]
						+ dp[(i - 1) * 21 * 21 + j * 21 + k - 1]
						- dp[(i - 1) * 21 * 21 + (j - 1) * 21 + k - 1];
				}
			}
		}
	}

	int a, b, c;
	cin >> a >> b >> c;
	int p = -1;
	while (a != -1 || b != -1 || c != -1)
	{
		p = a * 21 * 21 + b * 21 + c;
		if (a <= 0 || b <= 0 || c <= 0)
		{
			p = 0;
		}
		if (a > 20 || b > 20 || c > 20)
		{
			p = 21 * 21 * 21 - 1;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = "
			<< dp[p] << '\n';
		cin >> a >> b >> c;
	}
}