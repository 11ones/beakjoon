// 2022년 11월 8일 20:34:46
// 메모리 초과
// KB
// ms
#include <iostream>
using namespace std;

int x = 0;
bool arr[30730][30730];
void rec(int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < y * 2; j++)
		{
			if (arr[i][j] == 1)
			{
				arr[i + y][j] = 1;
				arr[i + y][j + y * 2] = 1;
			}
		}
	}
	if (y != x / 2)
	{
		rec(y * 2);
	}
}

int main()
{
	cin >> x;
	for (int i = 0; i < 3; i++)
		arr[i][0] = 1;
	for (int i = 0; i < 5; i++)
		arr[2][i] = 1;
	arr[1][2] = 1;
	rec(3);
	for (int i = 0; i < x; i++)
	{
		for (int j = i + 1; j < x; j++)
			cout << " ";
		for (int j = 0; j < x * 2; j++)
		{
			if (arr[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << '\n';
	}
}