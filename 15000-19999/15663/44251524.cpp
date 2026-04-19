// 2022년 6월 7일 11:04:39
// 맞았습니다!!
// 2060KB
// 8ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array <int, 8> arr;
array <int, 8> sav;
array <int, 10001> check{ 0 };

int m, n, x{ 0 };

void loop(int a)
{
	if (a != n)
	{
		for (int i{ 0 }; i < x; i++)
		{
			if (check[arr[i]] == 0)
				continue;
			sav[a] = arr[i];
			check[arr[i]]--;
			loop(a + 1);
			check[arr[i]]++;
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

	loop(0);
}