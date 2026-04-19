// 2023년 3월 27일 17:26:01
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i <= 999; i++)
	{
		for (int j = -999; j <= 999; j++)
		{
			if (a * i + b * j == c && d * i + e * j == f)
			{
				cout << i << " " << j;
				break;
			}
		}
	}
}