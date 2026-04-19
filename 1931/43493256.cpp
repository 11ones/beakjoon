// 2022년 5월 18일 21:56:58
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct
{
	int a;
	int b;
	int c;
}Connect;

typedef struct
{
	int start;
	int end;
}Timerange;

vector <Connect> connect;
vector <Timerange> timerange;
vector <int> startend;

bool compareConnect(Connect x, Connect y)
{
	if (x.c == y.c)
		return x.a < y.a;
	else
		return x.c < y.c;
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
		int a, b;
		cin >> a >> b;
		if (a == b)
		{
			bool x{ 0 };
			for (int j{ 0 }; j < startend.size(); j++)
			{
				if (startend[j] == a)
				{
					x = 1;
					break;
				}
			}
			if (x == 0)
				answer++;
		}
		else
			connect.push_back({ a,b,b - a });
	}
	sort(connect.begin(), connect.end(), compareConnect);

	timerange.push_back({ connect[0].a,connect[0].b });
	answer++;

	for (int i{ 1 }; i < connect.size(); i++)
	{
		sort(timerange.begin(), timerange.end(), compareTimerange);
		if (connect[i].b <= timerange[0].start)
		{
			timerange.push_back({ connect[i].a,connect[i].b });
			answer++;
			continue;
		}
		for (int j{ 0 }; j < timerange.size() - 1; j++)
		{
			if (timerange[j].end <= connect[i].a && connect[i].b <= timerange[j + 1].start)
			{
				timerange.push_back({ connect[i].a,connect[i].b });
				answer++;
				continue;
			}
		}
		if (timerange[timerange.size() - 1].start <= connect[i].a)
		{
			timerange.push_back({ connect[i].a,connect[i].b });
			answer++;
			continue;
		}
	}
	cout << answer;
}