// 2023년 3월 27일 17:58:07
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

	int ap, aq, bp, bq;
	cin >> ap >> aq >> bp >> bq;

	int x = aq, y = bq;
	while (x != y)
	{
		if (x > y) y += bq;
		else x += aq;
	}
	ap *= x / aq;
	bp *= y / bq;
	int sum = ap + bp;
	while (sum != 0)
	{
		int tmp = sum;
		sum = x % sum;
		x = tmp;
	}
	sum = ap + bp;
	cout << sum / x << " " << y / x;
}