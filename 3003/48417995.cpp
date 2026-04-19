// 2022년 8월 28일 20:35:31
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <int, 6> arr{ 1,1,2,2,2,8 };
	array <int, 6> arrin;

	for (int i = 0; i < 6; i++)
	{
		cin >> arrin[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] - arrin[i] << " ";
	}
}