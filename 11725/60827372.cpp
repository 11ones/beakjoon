// 2023년 5월 16일 00:01:08
// 런타임 에러 (DoubleFree)
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

vector<int> allnode[100000];

void ansrec(int parent, int* ans)
{
	while (!allnode[parent].empty())
	{
		int child = allnode[parent].back();
		allnode[parent].pop_back();
		if (ans[child - 2] != 0) continue;
		ans[child - 2] = parent;
		ansrec(child, ans);
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

	int* ans = new int[n] {};

	ansrec(1, ans);
	for (int i = 0; i < n - 1; i++)
	{
		cout << ans[i] << '\n';
	}

	delete ans;
}