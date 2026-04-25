// 2023년 1월 25일 09:54:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		sum += x;
		arr[i] = x;
	}
	sort(arr, &arr[5]);
	cout << sum / 5 << endl << arr[2];
}