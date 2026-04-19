// 2023년 2월 26일 15:20:22
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a1, a2, c, n0;
	cin >> a1 >> a2 >> c >> n0;
	if (a1 * n0 + a2 <= c * n0) cout << 1;
	else cout << 0;
}