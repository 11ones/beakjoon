// 2022년 8월 31일 17:21:47
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 401> arr{ 0, };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[x + 200]++;
	}
	cin >> n;
	cout << arr[n + 200];
}