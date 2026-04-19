// 2022년 5월 20일 16:38:42
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long L;

vector <L> v;

void multiple(L f, L a, L b, L c)
{
	if (b == 1)
	{
		cout << a;
	}
	else if (b % 2 == 0)
	{
		multiple(f, (a % c) * (a % c) % c, b / 2, c);
	}
	else if (b % 2 == 1)
	{
		multiple(f, (a % c) * (f % c) % c, b - 1, c);
	}
}

int main()
{
	L a, b, c;
	cin >> a >> b >> c;
	a %= c;
	L sav{ a };

	multiple(a, a, b, c);
}