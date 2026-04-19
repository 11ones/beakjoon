// 2022년 5월 13일 11:36:28
// 맞았습니다!!
// 2020KB
// 36ms
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
		int i;
		if (x == y)
		{
			cout << x << '\n';
		}
		else
		{
			int sav{ x - 1 };
			bool check{ 0 };
			for (i = 0; i < n; i++)
			{
				if (sav % n == (y - 1))
				{
					check = 1;
					break;
				}
				sav += m;
			}
			if (check)
				cout << sav + 1 << '\n';
			else
				cout << "-1" << '\n';
		}
	}
}