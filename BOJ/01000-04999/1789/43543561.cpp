// 2022년 5월 19일 22:56:35
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long x{ 0 };
	int i{ 0 };
	while (x < n)
	{
		i++;
		x += i;
	}
	if (x == n)
		cout << i;
	else
		cout << i - 1;
}