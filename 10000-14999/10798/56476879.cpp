// 2023년 2월 25일 23:24:44
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
	string arr[5];
	for (int i = 0; i < 5; i++) cin >> arr[i];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j].size() <= i) continue;
			s += arr[j][i];
		}
	}
	cout << s;
}