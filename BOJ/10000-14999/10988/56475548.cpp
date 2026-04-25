// 2023년 2월 25일 22:59:41
// 맞았습니다!!
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
	int len = s.size();
	bool check = 0;
	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			check = 1;
			break;
		}
	}
	if (check == 1) cout << 0;
	else cout << 1;
}