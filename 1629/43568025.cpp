// 2022년 5월 20일 16:08:47
// 시간 초과
// KB
// ms
#include <iostream>

using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	a %= c;
	long long sav{ a };

	for (long long i{ 0 }; i < b; i++)
	{
		a = a * a % c;
		if (a == sav)
		{
			i = b % i;
		}
	}
	cout << a;
}