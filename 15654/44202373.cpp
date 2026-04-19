// 2022년 6월 5일 23:28:25
// 맞았습니다!!
// 2020KB
// 32ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array <int, 8> arr;
array <int, 8> sav;
array <bool, 8> check;
int m, n;

void loop(int a)
{
	if (a != n)
	{
		for (int i{ 0 }; i < m; i++)
		{
			if (check[i])
				continue;
			sav[a] = arr[i];
			check[i] = 1;
			loop(a + 1);
			check[i] = 0;
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

	loop(0);
}