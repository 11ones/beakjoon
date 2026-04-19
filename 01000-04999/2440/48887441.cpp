// 2022년 9월 7일 23:29:30
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = i; j < x; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}