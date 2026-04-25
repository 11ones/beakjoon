// 2022년 11월 8일 20:23:25
// 맞았습니다!!
// 42084KB
// 168ms
#include <iostream>
using namespace std;

int x = 0;
bool arr[6562][6252];
void rec(int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] == 1)
			{
				arr[i + y][j] = 1;
				arr[i + 2 * y][j] = 1;
				arr[i + 2 * y][j + y] = 1;
				arr[i + 2 * y][j + 2 * y] = 1;
				arr[i + y][j + 2 * y] = 1;
				arr[i][j + 2 * y] = 1;
				arr[i][j + y] = 1;
			}
		}
	}
	if (y != x / 3)
	{
		rec(y * 3);
	}
}

int main()
{
	cin >> x;
	arr[0][0] = 1;
	rec(1);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (arr[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << '\n';
	}
}