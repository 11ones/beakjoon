// 2023년 5월 15일 01:43:04
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		int x = m * 2 - n;
		cout << x << " " << m - x << '\n';
	}
}