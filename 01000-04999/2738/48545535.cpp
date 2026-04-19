// 2022년 8월 31일 16:22:24
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	array <array<int, 100>, 100> arra, arrb;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arra[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arrb[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arra[i][j] + arrb[i][j] << " ";
		}
		cout << '\n';
	}
}