// 2022년 11월 11일 16:55:11
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int pn(int x)
{
	if (x == 1)
		return 1;
	if (x == 2)
		return 1;
	return pn(x - 1) + pn(x - 2);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	cout << pn(x);
}