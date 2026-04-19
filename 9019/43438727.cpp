// 2022년 5월 17일 20:46:02
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <array>
#include <vector>

using namespace std;

array <long long, 20> power{ 1 };

int first, last;

void BFS()
{
	queue <int> q;

	long long x{ 0 };

	q.push(first);
	int p{ first };

	while (1)
	{
		p = q.front();
		q.pop();
		if (p * 2 % 10000 == last)
		{
			x += 1;
			break;
		}
		else
			q.push(p * 2 % 10000);
		if (p != 0)
		{
			if (p - 1 == last)
			{
				x += 2;
				break;
			}
			else
				q.push(p - 1);
		}
		else
		{
			if (last == 9999)
			{
				x += 2;
				break;
			}
			else
				q.push(9999);
		}
		int l = p / 1000 + p / 100 % 10 * 1000 + p / 10 % 10 * 100 + p % 10 * 10;
		if (l == last)
		{
			x += 3;
			break;
		}
		else
			q.push(l);
		int r = p / 1000 * 100 + p / 100 % 10 * 10 + p / 10 % 10 + p % 10 * 1000;
		if (r == last)
		{
			x += 4;
			break;
		}
		else
			q.push(r);
		x += 4;
	}
	int k{ 0 };
	while (x >= 0)
		x -= power[k++];

	x += power[--k];

	vector <char> str;
	for (int i{ k - 1 }; i >= 0; i--)
	{
		switch (x / power[i])
		{
		case 0:
			str.push_back('D');
			break;
		case 1:
			str.push_back('S');
			x -= power[i];
			break;
		case 2:
			str.push_back('L');
			x -= power[i] * 2;
			break;
		case 3:
			str.push_back('R');
			x -= power[i] * 3;
		}
	}
	int size{ (int)str.size() };
	cout << size << '\n';
	for (int i{ 0 }; i < size; i++)
		cout << str[i];
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for (int i{ 1 }; i < 20; i++)
		power[i] = 4 * power[i - 1];

	int t;
	cin >> t;
	for (int f{ 0 }; f < t; f++)
	{
		cin >> first >> last;
		BFS();
	}
}