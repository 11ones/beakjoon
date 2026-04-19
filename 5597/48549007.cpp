// 2022년 8월 31일 17:18:04
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 31> arr{ 0, };
	for (int i = 0; i < 28; i++)
	{
		int x;
		cin >> x;
		arr[x]++;
	}
	for (int i = 1; i <= 30; i++)
	{
		if (arr[i] == 0)
			cout << i << "\n";
	}
}