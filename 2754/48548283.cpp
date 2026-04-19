// 2022년 8월 31일 17:06:23
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	double score = 0;
	switch (s[0])
	{
	case 'A':
		score = 4;
		break;
	case 'B':
		score = 3;
		break;
	case 'C':
		score = 2;
		break;
	case 'D':
		score = 1;
	}
	switch (s[1])
	{
	case '+':
		score += 0.3;
		break;
	case '-':
		score -= 0.3;
	}
	cout << score;
}