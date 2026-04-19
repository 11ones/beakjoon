// 2023년 2월 9일 23:22:02
// 맞았습니다!!
// 2032KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int v[1000][3];

int mini(int a, int b)
{
	if (a > b) return b;
	else return a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i][0] >> v[i][1] >> v[i][2];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			v[i][j] = mini(v[i - 1][(j + 1) % 3], v[i - 1][(j + 2) % 3]) + v[i][j];
		}
	}

	int sav = v[n-1][0];
	if (v[n-1][1] < sav) sav = v[n - 1][1];
	if (v[n-1][2] < sav) sav = v[n - 1][2];
	cout << sav;
}