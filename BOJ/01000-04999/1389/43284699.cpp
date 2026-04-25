// 2022년 5월 14일 16:03:45
// 맞았습니다!!
// 2064KB
// 0ms
#include <iostream>
#include <string>
#include <queue>
#include <array>

using namespace std;

typedef struct
{
	int a;
	int b;
}Connect;

array <Connect, 5000> connect;
array <bool, 101> check;
queue <int> q;
queue <int> qnum;

int bfs(int x, int b)
{
	int sum{ 0 };
	check[x] = 1;
	q.push(x);
	qnum.push(1);
	int p, pnum;
	while (1)
	{
		if (q.size() == 0)
			break;
		p = q.front();
		pnum = qnum.front();
		q.pop();
		qnum.pop();

		for (int i{ 0 }; i < b; i++)
		{
			if (connect[i].a == p && check[connect[i].b] == 0)
			{
				sum += pnum;
				check[connect[i].b] = 1;
				q.push(connect[i].b);
				qnum.push(pnum + 1);
			}
			else if (connect[i].b == p && check[connect[i].a] == 0)
			{
				sum += pnum;
				check[connect[i].a] = 1;
				q.push(connect[i].a);
				qnum.push(pnum + 1);
			}
		}
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i{ 0 }; i < m; i++)
	{
		cin >> connect[i].a >> connect[i].b;
	}
	int min{ 1000000 };
	int pmin{ 0 };
	for (int i{ 1 }; i <= n; i++)
	{
		for (int j{ 1 }; j <= n; j++)
			check[j] = 0;
		int sav{ bfs(i, m) };
		if (min > sav)
		{
			min = sav;
			pmin = i;
		}
	}
	cout << pmin;
}