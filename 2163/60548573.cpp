// 2023년 5월 10일 01:31:54
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int x = 0;

void rec(int n, int m)
{
	if (!(n == 1 && m == 1))
	{
		x++;
		if (n >= m)
		{
			rec(n / 2, m);
			rec((n + 1) / 2, m);
		}
		else
		{
			rec(n, m / 2);
			rec(n, (m + 1) / 2);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	rec(n, m);
	cout << x;
}