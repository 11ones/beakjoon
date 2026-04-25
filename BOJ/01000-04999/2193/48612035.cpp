// 2022년 9월 1일 22:38:39
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int counts = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i & i >> 1)
			counts++;
	}
	cout << n - counts;
}