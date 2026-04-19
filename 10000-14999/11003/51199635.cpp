// 2022년 11월 1일 20:02:13
// 맞았습니다!!
// 43588KB
// 1428ms
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l, n;
	cin >> l >> n;

	deque <pair<int, int>> s;

	for (int i = 0; i < l; i++)
	{
		int x;
		cin >> x;
		if (s.empty())
			s.push_back({ x, i });
		else
		{
			while (!s.empty() && s.front().second <= i - n)
			{
				s.pop_front();
			}
			while (!s.empty() && (s.back().first >= x))
			{
				s.pop_back();
			}
			s.push_back({ x,i });
		}
		cout << s.front().first << " ";
	}
}