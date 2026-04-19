// 2023년 5월 16일 00:07:07
// 맞았습니다!!
// 11828KB
// 124ms
#include <iostream>
#include <vector>
using namespace std;

vector<int> allnode[100000];
int ans[100000];

void ansrec(int parent)
{
	while (!allnode[parent].empty())
	{
		int child = allnode[parent].back();
		allnode[parent].pop_back();
		if (ans[child - 2] != 0) continue;
		ans[child - 2] = parent;
		ansrec(child);
	}
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;

	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}

	for (int i = 0; i < n - 1; i++)
	{
		pair<int, int> tmp = v.back();
		v.pop_back();
		allnode[tmp.first].push_back(tmp.second);
		allnode[tmp.second].push_back(tmp.first);
	}

	ansrec(1);
	for (int i = 0; i < n - 1; i++)
	{
		cout << ans[i] << '\n';
	}
}