// 2022년 11월 10일 00:47:28
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	int max = 0;
	pair <int, int> pmax;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				pmax = { i + 1, j + 1 };
			}
		}
	}
	cout << max << "\n" << pmax.first << " " << pmax.second;
}