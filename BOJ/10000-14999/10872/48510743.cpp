// 2022년 8월 30일 20:22:14
// 시간 초과
// KB
// ms
#include <iostream>

using namespace std;

int facto(int n)
{
	static int x = 1;
	x *= n;
	if (n != 1)
		return facto(n - 1);
	return x;
}

int main()
{
	int n;
	cin >> n;
	cout << facto(n);
}