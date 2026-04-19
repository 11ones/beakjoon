// 2023년 2월 9일 20:44:53
// 맞았습니다!!
// 5936KB
// 4ms
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001][1001] = { {1},{1,1} };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i <= 1000; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 1; j < i; j++)
		{
			arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
		}
	}

	int x, y;
	cin >> x >> y;
	cout << arr[x][y];
}