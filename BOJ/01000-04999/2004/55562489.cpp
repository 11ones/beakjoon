// 2023년 2월 9일 21:43:28
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;
	cin >> x >> y;

	if (2 * y > x) y = x - y;

	int count2 = 0, count5 = 0;
	for (long long i = 2; i <= x; i *= 2)
	{
		count2 += x / i;
	}
	for (long long i = 2; i <= y; i *= 2)
	{
		count2 -= y / i;
	}	
	for (long long i = 2; i <= (x - y); i *= 2)
	{
		count2 -= (x - y) / i;
	}	
	for (long long i = 5; i <= x; i *= 5)
	{
		count5 += x / i;
	}	
	for (long long i = 5; i <= y; i *= 5)
	{
		count5 -= y / i;
	}	
	for (long long i = 5; i <= (x - y); i *= 5)
	{
		count5 -= (x - y) / i;
	}
	if (count5 > count2)cout << count2;
	else cout << count5;
}