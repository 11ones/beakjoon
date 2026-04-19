// 2022년 8월 29일 14:46:58
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x, i = 1;
	cin >> x;

	while (x > 0)
	{
		x -= i++;
	}
	i--;
	x += i - 1;

	if (i % 2 == 0)
	{
		cout << x + 1 << '/' << i - x;
	}
	else
	{
		cout << i - x << '/' << x + 1;
	}
}