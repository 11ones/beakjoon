// 2022년 5월 13일 10:30:32
// 시간 초과
// KB
// ms
#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int p = 0; p < t; p++)
	{
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		int i;
		for (i = 1; i <= m * n; i++)
		{
			if (i % m == x && i % n == y)
				break;
		}
		if (i == m * n + 1)
			cout << "-1" << endl;
		else
			cout << i << endl;
	}
}