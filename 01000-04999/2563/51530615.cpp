// 2022년 11월 10일 00:58:20
// 맞았습니다!!
// 2032KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

bool arr[102][102];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
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
	for (int j = 0; j <= 101; j++)
	{
		for (int k = 0; k <= 101; k++)
		{
			if (arr[j][k] == 1)
				mycount++;
		}
	}
	cout << mycount;
}