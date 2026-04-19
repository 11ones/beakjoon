// 2022년 5월 17일 19:30:12
// 메모리 초과
// KB
// ms
#include <iostream>
#include <string>
#include <queue>
#include <array>

using namespace std;

array <int, 16> power{ 1 };

int first, last;

string BFS()
{
	queue <int> q;
	queue <int> qs;

	int x{ 0 };

	q.push(first);
	qs.push(0);
	int p{ first };
	int ps{ 0 };
	while (1)
	{
		if (q.size() == 0)
			break;
		p = q.front();
		ps = qs.front();
		q.pop();
		qs.pop();

		if (p * 2 % 10000 == last)
		{
			x++;
			ps++;
			break;
		}
		else
		{
			x++;
			q.push(p * 2 % 10000);
			qs.push(ps + 1);
		}

		if (p != 0)
		{
			if (p - 1 == last)
			{
				x++;
				ps++;
				break;
			}
			else
			{
				x++;
				q.push(p - 1);
				qs.push(ps + 1);
			}
		}
		else
		{
			if (last == 9999)
			{
				x++;
				ps++;
				break;
			}
			else
			{
				x++;
				q.push(9999);
				qs.push(ps + 1);
			}
		}
		int l = p / 1000 + p / 100 % 10 * 1000 + p / 10 % 10 * 100 + p % 10 * 10;
		if (l == last)
		{
			x++;
			ps++;
			break;
		}
		else
		{
			x++;
			q.push(l);
			qs.push(ps + 1);
		}

		int r = p / 1000 * 100 + p / 100 % 10 * 10 + p / 10 % 10 + p % 10 * 1000;
		if (r == last)
		{
			x++;
			ps++;
			break;
		}
		else
		{
			x++;
			q.push(r);
			qs.push(ps + 1);
		}
	}

	int k{ 0 };

	while (x >= 0)
	{
		x -= power[k++];
	}

	x += power[--k];


	string str;
	for (int i{ k - 1 }; i >= 0; i--)
	{
		switch (x / power[i])
		{
		case 0:
			str += 'D';
			break;
		case 1:
			str += 'S';
			break;
		case 2:
			str += 'L';
			break;
		case 3:
			str += 'R';
			break;
		}
		x /= 4;
	}
	return str;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for (int i{ 1 }; i <= 15; i++)
		power[i] = 4 * power[i - 1];

	int t;
	cin >> t;
	for (int f{ 0 }; f < t; f++)
	{
		cin >> first >> last;
		cout << BFS() << '\n';
	}
}