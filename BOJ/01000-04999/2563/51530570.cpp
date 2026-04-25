// 2022년 11월 10일 00:56:35
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool arr[101][101];
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		pair <int, int> p;
		cin >> p.first >> p.second;
		for (int j = p.first; j < p.first + 10; j++)
		{
			for (int k = p.second; k < p.second + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	int mycount = 0;
	for (int j = 0; j <= 100; j++)
	{
		for (int k = 0; k <= 100; k++)
		{
			if (arr[j][k] == 1)
				mycount++;
		}
	}
	cout << mycount;
}