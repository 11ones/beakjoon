// 2022년 8월 30일 20:26:18
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int pivo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return pivo(n - 1) + pivo(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << pivo(n);
}