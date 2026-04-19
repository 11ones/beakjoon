// 2022년 8월 31일 16:37:15
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		else
			s[i] += 'a' - 'A';
	cout << s;
}