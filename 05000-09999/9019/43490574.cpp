// 2022년 5월 18일 21:03:31
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
#include <queue>
#include <array>

using namespace std;

array <int, 10000> check{ 0 };

int first, last;

void BFS()
{
	queue <int> q;
	queue <string> qs;

	check[first]++;
	q.push(first);
	qs.push("");
	while (1)
	{
		if (q.size() == 0)
			break;
		int p = q.front();
		string ps = qs.front();
		q.pop();
		qs.pop();
		int d = p * 2 % 10000;
		if (d == last)
		{
			cout << ps + "D" << '\n';
			break;
		}
		else
		{
			if (p != 0 && check[d] == 0)
			{
				check[d]++;
				q.push(d);
				qs.push(ps + "D");
			}
		}
		if (p != 0)
		{
			if (p - 1 == last)
			{
				cout << ps + "S" << '\n';
				break;
			}
			else if (check[p - 1] == 0)
			{
				check[p - 1]++;
				q.push(p - 1);
				qs.push(ps + "S");
			}
		}
		else
		{
			if (last == 9999)
			{
				cout << ps + "S" << '\n';
				break;
			}
			else if (check[9999] == 0)
			{
				check[9999]++;
				q.push(9999);
				qs.push(ps + "S");
			}
		}
		if (!(p / 1000 == p / 100 % 10 && p / 100 % 10 == p / 10 % 10 && p / 10 % 10 == p % 10))
		{
			int l = p / 1000 + p / 100 % 10 * 1000 + p / 10 % 10 * 100 + p % 10 * 10;
			if (l == last)
			{
				cout << ps + "L" << '\n';
				break;
			}
			else if (check[l] == 0)
			{
				check[l]++;
				q.push(l);
				qs.push(ps + "L");
			}
			int r = p / 1000 * 100 + p / 100 % 10 * 10 + p / 10 % 10 + p % 10 * 1000;
			if (r == last)
			{
				cout << ps + "R" << '\n';
				break;
			}
			else if (check[r] == 0)
			{
				check[r]++;
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
		BFS();
	}
}