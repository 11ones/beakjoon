// 2023년 2월 26일 15:21:42
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

	int a1, a2, c, n0;
	cin >> a1 >> a2 >> c >> n0;
	if (a1 * n0 + a2 <= c * n0 && a1 <= c) cout << 1;
	else cout << 0;
}