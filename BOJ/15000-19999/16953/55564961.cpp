// 2023년 2월 9일 22:24:01
// 맞았습니다!!
// 2284KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

queue< pair<int, long long>> q;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;
	cin >> x >> y;
	q.push({ 1,x });
	
	pair<int, long long> tmp;
	while (1)
	{
		if (q.empty())
		{
			cout << "-1";
			break;
		}
		tmp = q.front();
		q.pop();
		if (tmp.second * 2 >= 1'000'000'000)
		{
			continue;
		}
		if (tmp.second * 2 == y)
		{
			cout << ++tmp.first;
			break;
		}
		else q.push({ ++tmp.first,tmp.second * 2 });
		if (tmp.second * 10 + 1 >= 1'000'000'000)
		{
			continue;
		}
		if (tmp.second * 10 + 1 == y)
		{
			cout << tmp.first;
			break;
		}
		else q.push({ tmp.first,tmp.second * 10 + 1 });
	}
}