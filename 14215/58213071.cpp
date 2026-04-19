// 2023년 3월 27일 17:23:02
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

	int a, b, c;
	cin >> a >> b >> c;
	if (b < c) swap(b, c);
	if (a < b) swap(a, b);
	if (b + c <= a) cout << (b + c) * 2 - 1;
	else cout << a + b + c;
}