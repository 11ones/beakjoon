// 2022년 9월 4일 19:36:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	array <int, 1000> arr;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + a);
	cout << arr[a - b];
}