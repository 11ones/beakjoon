// 2022년 5월 20일 16:42:30
// 메모리 초과
// KB
// ms
#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long L;

vector <L> v;

L multiple(L a, L b, L c)
{
	if (b == 1)
	{
		return a;
	}
	else if (b % 2 == 0)
	{
		multiple((a % c) * (a % c) % c, b / 2, c);
	}
	else if (b % 2 == 1)
	{
		v.push_back(a % c);
		multiple((a % c) * (a % c) % c, b / 2, c);
	}
}

int main()
{
	L a, b, c;
	cin >> a >> b >> c;
	a %= c;
	L sav{ a };

	a = multiple(a, b, c);

	while (v.size() != 0)
	{
		a = (a % c) * (v.back() % c) % c;
		v.pop_back();
	}
	cout << a;
}