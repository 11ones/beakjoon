// 2022년 6월 6일 11:15:36
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array <int, 8> arr;
array <int, 8> sav;
int m, n;

void loop(int a, int b)
{
	if (a != n)
	{
		for (int i{ b }; i < m; i++)
		{
			sav[a] = arr[i];
			loop(a + 1, i);
		}
	}
	else
	{
		for (int i{ 0 }; i < n; i++)
		{
			cout << sav[i] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;
	
	for (int i{ 0 }; i < m; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.begin() + m);

	loop(0, 0);
}