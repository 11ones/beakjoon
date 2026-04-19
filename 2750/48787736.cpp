// 2022년 9월 5일 23:16:25
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;
int main()
{
	int a;
	cin >> a;
	array <int, 1000> arr;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + a);
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\n";
	}
}