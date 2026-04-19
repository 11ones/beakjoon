// 2023년 2월 20일 15:27:24
// 50점
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		char ch;
		int l, r;
		cin >> ch >> l >> r;
		int cnt = 0;
		while (s.find(ch, l) != -1)
		{
			if (s.find(ch, l) > r) break;
			cnt++;
			l = s.find(ch, l) + 1;
			if (l > r) break;
		}
		cout << cnt << '\n';
	}
}