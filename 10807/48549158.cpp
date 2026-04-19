// 2022년 8월 31일 17:20:26
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 101> arr{ 0, };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[x]++;
	}
	cin >> n;
	cout << arr[n];
}