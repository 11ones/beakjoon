// 2022년 11월 1일 19:47:13
// 시간 초과
// KB
// ms
#include <iostream>
#include <deque>
using namespace std;

int main()
{
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
			while (!s.empty() && (s.back().first >= x || s.back().second < i - 2))
			{
				s.pop_back();
			}
			s.push_back({ x,i });
		}
		cout << s.front().first << " ";
	}
}