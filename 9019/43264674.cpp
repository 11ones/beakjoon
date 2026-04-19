// 2022년 5월 14일 00:28:33
// 메모리 초과
// KB
// ms
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int first, last;

string BFS()
{
	queue <int> q;
	queue <string> qs;

	q.push(first);
	qs.push("0");
	while (1)
	{
		if (q.size() == 0)
			break;
		int p = q.front();
		string ps = qs.front();
		q.pop();
		qs.pop();
		if (p * 2 % 10000 == last)
			return ps + "D";
		else
		{
			if (p != 0)
			{
				q.push(p * 2 % 10000);
				qs.push(ps + "D");
			}
		}
		if (p != 0)
		{
			if (p - 1 == last)
				return ps + "S";
			else
			{
				q.push(p - 1);
				qs.push(ps + "S");
			}
		}
		else
		{
			if (last == 9999)
				return ps + "S";
			else
			{
				q.push(9999);
				qs.push(ps + "S");
			}
		}
		if (!(p / 1000 == p / 100 % 10 && p / 100 % 10 == p / 10 % 10 && p / 10 % 10 == p % 10))
		{
			int l = p / 1000 + p / 100 % 10 * 1000 + p / 10 % 10 * 100 + p % 10 * 10;
			if (l == last)
				return ps + "L";
			else
			{
				q.push(l);
				qs.push(ps + "L");
			}
			int r = p / 1000 * 100 + p / 100 % 10 * 10 + p / 10 % 10 + p % 10 * 1000;
			if (r == last)
				return ps + "R";
			else
			{
				q.push(r);
				qs.push(ps + "R");
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	for (int f{ 0 }; f < t; f++)
	{
		cin >> first >> last;
		string bfs = BFS();
		bfs = bfs.substr(1, bfs.length() - 1);
		cout << bfs << '\n';
	}
}