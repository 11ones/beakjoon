// 2022년 5월 17일 19:04:31
// 런타임 에러 (IntegerOverflow)
// KB
// ms
#include <iostream>
#include <string>
#include <queue>
#include <array>

using namespace std;

array <int, 10> power{ 1 };

int first, last;

string BFS()
{
	queue <int> q;
	queue <int> qs;
	queue <int> q2;

	q.push(first);
	qs.push(0);
	q2.push(0);
	int p{ first };
	int ps{ 0 };
	int p2{ 0 };
	while (1)
	{
		if (q.size() == 0)
			break;
		p = q.front();
		ps = qs.front();
		p2 = q2.front();
		q.pop();
		qs.pop();
		q2.pop();

		if (p * 2 % 10000 == last)
		{
			p2 += power[ps] * 1;
			ps++;
			break;
		}
		else
		{
			if (p != 0)
			{
				q.push(p * 2 % 10000);
				qs.push(ps + 1);
				q2.push(p2 + power[ps] * 1);
			}
		}
		if (p != 0)
		{
			if (p - 1 == last)
			{
				p2 += power[ps] * 2;
				ps++;
				break;
			}
			else
			{
				q.push(p - 1);
				qs.push(ps + 1);
				q2.push(p2 + power[ps] * 2);
			}
		}
		else
		{
			if (last == 9999)
			{
				p2 += power[ps] * 2;
				ps++;
				break;
			}
			else
			{
				q.push(9999);
				qs.push(ps + 1);
				q2.push(p2 + power[ps] * 2);
			}
		}
		if (!(p / 1000 == p / 100 % 10 && p / 100 % 10 == p / 10 % 10 && p / 10 % 10 == p % 10))
		{
			int l = p / 1000 + p / 100 % 10 * 1000 + p / 10 % 10 * 100 + p % 10 * 10;
			if (l == last)
			{
				p2 += power[ps] * 3;
				ps++;
				break;
			}
			else
			{
				q.push(l);
				qs.push(ps + 1);
				q2.push(p2 + power[ps] * 3);
			}
			int r = p / 1000 * 100 + p / 100 % 10 * 10 + p / 10 % 10 + p % 10 * 1000;
			if (r == last)
			{
				p2 += power[ps] * 4;
				ps++;
				break;
			}
			else
			{
				q.push(r);
				qs.push(ps + 1);
				q2.push(p2 + power[ps] * 4);
			}
		}
	}
	string str;
	for (int i{ ps - 1 }; i >= 0; i--)
	{
		switch (p2 / power[i] % 10)
		{
		case 1:
			str += 'D';
			break;
		case 2:
			str += 'S';
			break;
		case 3:
			str += 'L';
			break;
		case 4:
			str += 'R';
			break;
		}
	}
	return str;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	for (int i{ 1 }; i < 10; i++)
		power[i] = 10 * power[i - 1];

	int t;
	cin >> t;
	for (int f{ 0 }; f < t; f++)
	{
		cin >> first >> last;
		cout << BFS() << '\n';
	}
}