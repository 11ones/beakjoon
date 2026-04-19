// 2022년 5월 14일 22:33:38
// 맞았습니다!!
// 2172KB
// 0ms
#include <iostream>
#include <array>
#include <queue>

using namespace std;

array <array <char, 100>, 100> arr;
array <array <bool, 100>, 100> check;

queue <int> qx;
queue <int> qy;
queue <int> qnum;

int n, m;

int bfs()
{
	array <int, 4> x{ -1,1,0,0 };
	array <int, 4> y{ 0,0,-1,1 };
	int px;
	int py;
	int pnum;

	check[0][0] = 1;
	qx.push(0);
	qy.push(0);
	qnum.push(1);
	while (1)
	{
		px = qx.front();
		py = qy.front();
		pnum = qnum.front();
		qx.pop();
		qy.pop();
		qnum.pop();
		if (px == m - 1 && py == n - 1)
			return pnum;
		for (int i{ 0 }; i < 4; i++)
		{
			if (py + y[i] < 0 || py + y[i] >= n || px + x[i] < 0 || px + x[i] >= m)
				continue;
			if (arr[py + y[i]][px + x[i]] == '1' && check[py + y[i]][px + x[i]] == 0)
			{
				check[py + y[i]][px + x[i]] = 1;
				qx.push(px + x[i]);
				qy.push(py + y[i]);
				qnum.push(pnum + 1);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << bfs();
}