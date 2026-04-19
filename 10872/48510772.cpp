// 2022년 8월 30일 20:22:47
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int facto(int n)
{
	static int x = 1;
	x *= n;
	if (n == 0)
		return 1;
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