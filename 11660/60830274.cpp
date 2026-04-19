// 2023년 5월 16일 01:14:56
// 맞았습니다!!
// 18452KB
// 140ms
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	ll** arr = new ll* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new ll[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	ll** arr2 = new ll* [n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		arr2[i] = new ll[n + 1] {};
	}

	arr2[1][1] = arr[0][0];
	for (int i = 2; i <= n; i++)
	{
		arr2[i][1] = arr2[i - 1][1] + arr[i - 1][0];
	}
	for (int i = 2; i <= n; i++)
	{
		arr2[1][i] = arr2[1][i - 1] + arr[0][i - 1];
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= n; j++)
		{
			arr2[i][j] = arr2[i - 1][j] + arr2[i][j - 1]
				- arr2[i - 1][j - 1] + arr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr2[x2][y2] - arr2[x2][y1 - 1] - arr2[x1 - 1][y2]
			+ arr2[x1 - 1][y1 - 1] << '\n';
	}
}