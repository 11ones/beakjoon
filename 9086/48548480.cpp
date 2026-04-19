// 2022년 8월 31일 17:09:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int u = 0; u < t; u++)
	{
		string s;
		cin >> s;
		cout << s.front() << s.back() << "\n";
	}
}