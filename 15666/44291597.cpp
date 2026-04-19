// 2022년 6월 8일 10:06:35
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array <int, 8> arr;
array <int, 8> sav;
array <bool, 10001> check;

int m, n, x{ 0 };

void loop(int a, int b)
{
	if (a != n)
	{
		for (int i{ b }; i < x; i++)
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
		int k;
		cin >> k;
		if (check[k] == 0)
			arr[x++] = k;
		check[k]++;
	}

	sort(arr.begin(), arr.begin() + x);

	loop(0, 0);
}