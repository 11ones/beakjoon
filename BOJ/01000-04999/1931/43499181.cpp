// 2022년 5월 18일 23:40:29
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct
{
	unsigned int a;
	unsigned int b;
}Connect;

typedef struct
{
	unsigned int start;
	unsigned int end;
}Timerange;

vector <Connect> connect;
vector <Timerange> timerange;

bool compareConnect(Connect x, Connect y)
{
	if (x.b - x.a == y.b - y.a)
		return x.a < y.a;
	else
		return x.b - x.a < y.b - y.a;
}

bool compareTimerange(Timerange x, Timerange y)
{
	return x.start < y.start;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer{ 0 };

	int n;
	cin >> n;

	for (int i{ 0 }; i < n; i++)
	{
		unsigned int a, b;
		cin >> a >> b;
		if (b > a)
			continue;
		connect.push_back({ a,b });
	}

	int len{ (int)connect.size() };

	if (len > 0)
	{
		sort(connect.begin(), connect.end(), compareConnect);
		timerange.push_back({ connect[0].a,connect[0].b });
		answer++;

		for (int i{ 1 }; i < len; i++)
		{
			int tlen{ (int)timerange.size() - 1 };
			if (connect[i].b <= timerange[0].start)
			{
				timerange.push_back({ connect[i].a,connect[i].b });
				answer++;
			}
			else if (timerange[tlen].end <= connect[i].a)
			{
				timerange.push_back({ connect[i].a,connect[i].b });
				answer++;
			}
			else
			{
				for (int j{ 0 }; j <tlen; j++)
				{
					if (timerange[j].end <= connect[i].a && connect[i].b <= timerange[j + 1].start)
					{
						timerange.push_back({ connect[i].a,connect[i].b });
						answer++;
						break;
					}
				}
			}
			sort(timerange.begin(), timerange.end(), compareTimerange);
		}
	}
	cout << answer;
}