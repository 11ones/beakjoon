// 2023년 2월 3일 16:45:47
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr1[3], arr2[3];
	for (int i = 0; i < 3; i++) cin >> arr1[i] >> arr2[i];
	sort(arr1, arr1 + 3);
	sort(arr2, arr2 + 3);
	if (arr1[0] == arr1[1]) cout << arr1[2];
	else cout << arr1[0];
	cout << " ";
	if (arr2[0] == arr2[1]) cout << arr2[2];
	else cout << arr2[0];
}