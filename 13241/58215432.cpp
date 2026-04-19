// 2023년 3월 27일 17:51:48
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b;
	cin >> a >> b;
	long long x = a, y = b;
	while (x != y)
	{
		if (x > y) y += b;
		else x += a;
	}
	cout << x;
}