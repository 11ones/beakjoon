// 2023년 2월 26일 17:51:10
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int a, b, n, m;

void find_min(int* min, vector<pair<int, int>>* bus, int s)
{
	for (int i = 0; i < bus[s].size(); i++)
	{
		int e = bus[s][i].first;
		int cost = bus[s][i].second;

		if (min[e] > min[s] + cost || min[e] == -1)
		{
			min[e] = min[s] + cost;
			find_min(min, bus, e);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	vector<pair<int, int>>* bus = new vector<pair<int, int>>[n + 1];
	int* min = new int[n + 1];
	for (int i = 0; i <= n; i++)
	{
		min[i] = -1;
	}

	for (int i = 0; i < m; i++)
	{
		int x, y, cost;
		cin >> x >> y >> cost;
		bus[x].push_back({ y,cost });
	}

	cin >> a >> b;
	min[a] = 0;
	find_min(min, bus, a);
	cout << min[b];
}