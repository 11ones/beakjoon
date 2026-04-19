// 2022년 8월 31일 16:33:43
// 맞았습니다!!
// 2024KB
// 4ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	while (s != "\0")
	{
		cout << s << '\n';
		getline(cin, s);
	}
}