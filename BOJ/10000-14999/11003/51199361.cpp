// 2022년 11월 1일 19:56:20
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

	int x;
	cin >> x;
	s.push_back({ x, 0 });
	for (int i = 1; i < l; i++)
	{
		while (s.back().first >= x || s.back().second < i - n)
		{
			s.pop_back();
			if (s.empty())
				break;
		}
		s.push_back({ x,i });
		cout << s.front().first << " ";
		cin >> x;
	}
	cout << s.front().first;
}