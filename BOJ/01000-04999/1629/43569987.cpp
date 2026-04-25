// 2022년 5월 20일 16:46:08
// 틀렸습니다
// KB
// ms
#include <iostream>

using namespace std;

typedef unsigned long long L;

void multiple(L a, L b, L c)
{
	if (b == 1)
	{
		cout << a;
	}
	else if (b % 2 == 0)
	{
		multiple((a % c) * (a % c) % c, b / 2, c);
	}
	else if (b % 2 == 1)
	{
		multiple(((a % c) * (a % c) % c) * (a % c) % c, b / 2, c);
	}
}

int main()
{
	L a, b, c;
	cin >> a >> b >> c;
	a %= c;
	L sav{ a };

	multiple(a, b, c);
}