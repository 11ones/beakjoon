// 2022년 5월 12일 15:34:44
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
		int a{ 1 }, b{ 1 };
		int count = 0;
		for (int i{ 0 }; i < m * n; i++)
		{
			if (a == x && b == y)
			{
				count = i + 1;
				break;
			}
			a++;
			b++;
			if (a > m)
				a = 1;
			if (b > n)
				b = 1;
			
		}
		if (count == 0)
			cout << "-1" << endl;
		else
			cout << count << endl;
	}
}