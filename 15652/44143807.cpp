// 2022년 6월 4일 11:59:10
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array <int, 8> arr;

void loop(int m, int n, int a, int b)
{
	if (a != n)
	{
		for (int i{ b }; i <= m; i++)
		{
			arr[a] = i;
			loop(m, n, a + 1, i);
		}
	}
	else
	{
		for (int i{ 0 }; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;
	
	loop(m, n, 0, 1);
}