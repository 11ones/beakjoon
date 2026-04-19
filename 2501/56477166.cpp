// 2023년 2월 25일 23:30:25
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

	int n, k;
	cin >> n >> k;
	int cnt = 0;
	bool check = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) cnt++;
		if (cnt == k) { check = 1; cnt = i; break; }
	}
	if (check == 0) cout << 0;
	else cout << cnt;
}