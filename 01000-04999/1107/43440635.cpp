// 2022년 5월 17일 21:22:57
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	array <int, 10> power{ 1 };

	for (int i{ 1 }; i < 10; i++)
		power[i] = 10 * power[i - 1];

	int target;
	cin >> target;
	int n;
	cin >> n;
	vector <int> broken;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		broken.push_back(x);
	}
	sort(broken.begin(), broken.end());
	int min = 10000000;
	int len = (int)log10(target) + 1;
	int pmin = 0;
	for (int i = power[len - 2]; i < power[len]; i++)
	{
		int ilen = (int)log10(i) + 1;
		bool m = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < ilen; k++)
			{
				if (i / power[k] % 10 == broken[j])
				{
					m = 1;
					break;
				}
			}
			if (m)
				break;
		}
		if (m)
			continue;
		else
		{
			int x1{ i - target };
			if (x1 < 0)
				x1 = -x1;

			int x = x1 + ilen;
			if (min > x)
			{
				min = x;
				pmin = i;
			}
		}
	}
	cout << min;
}