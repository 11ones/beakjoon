// 2023년 2월 26일 15:06:29
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n != -1)
	{
		vector <int> v;
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0) { v.push_back(i); sum += i; }
		}
		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < v.size() - 1; i++)
			{
				cout << v[i] << " + ";
			}
			cout << v.back() << '\n';
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
		cin >> n;
	}
}