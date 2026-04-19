// 2022년 5월 20일 16:50:59
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

typedef unsigned long long L;

L multiple(L a, L b, L c)
{
	if (b == 1)
	{
		return a;
	}
	else if (b % 2 == 0)
	{
		return multiple(a * a % c, b / 2, c);
	}
	else if (b % 2 == 1)
	{
		return multiple(a * a % c, b / 2, c) * a % c;
	}
}

int main()
{
	L a, b, c;
	cin >> a >> b >> c;
	a %= c;
	L sav{ a };

	cout << multiple(a % c, b, c);
}