// 2022년 6월 4일 12:00:13
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <array>

using namespace std;

array <int, 8> arr;

int m, n;

void loop(int a, int b)
{
	if (a != n)
	{
		for (int i{ b }; i <= m; i++)
		{
			arr[a] = i;
			loop(a + 1, i);
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

	cin >> m >> n;
	
	loop(0, 1);
}