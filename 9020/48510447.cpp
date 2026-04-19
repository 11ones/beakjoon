// 2022년 8월 30일 20:17:10
// 맞았습니다!!
// 2020KB
// 592ms
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vec;
	vec.push_back(2);
	for (int i = 3; i < 10010; i++)
	{
		bool check = 0;
		for (int elem : vec)
		{
			if (i % elem == 0)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			vec.push_back(i);
	}
	int t;
	cin >> t;
	for (int s = 0; s < t; s++)
	{
		int n;
		cin >> n;

		int a = 0, b = 10000;

		for (int i = 0;; i++)
		{
			for (int j = i;; j++)
			{
				if (vec[i] + vec[j] == n && b - a > vec[j] - vec[i])
				{
					a = vec[i];
					b = vec[j];
					break;
				}
				if (vec[i] + vec[j] > n)
					break;
			}
			if (vec[i] * 2 > n)
				break;
		}
		cout << a << " " << b << "\n";
	}
}