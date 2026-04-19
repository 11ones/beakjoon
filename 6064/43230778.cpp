// 2022년 5월 13일 11:11:01
// 시간 초과
// KB
// ms
#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int p = 0; p < t; p++)
	{
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		int sav{ -1 };
		for (int i{ 0 }; i < n; i++)
		{
			for (int j{ 0 }; j < m; j++)
			{
				if (x + i * m == y + j * n)
				{
					sav = x + i * m;
					break;
				}
			}
			if (sav != -1)
				break;
		}
		cout << sav << '\n';
	}
}