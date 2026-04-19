// 2022년 5월 13일 13:09:06
// 맞았습니다!!
// 2040KB
// 0ms
#include <iostream>
#include <array>

using namespace std;

void find(int m, int n, int a, int x);
void loop(int m, int n, int a, int x);

array <array<char, 64>, 64> arrc;
array <array<int, 64>, 64> arr;

void find(int m, int n, int a, int x)
{
	cout << '(';
	array <int, 4> px = { 0,1,0,1 };
	array <int, 4> py = { 0,0,1,1 };
	if (x == 1)
	{
		for (int i{ 0 }; i < 4; i++)
		{
			if (arr[m + py[i]][n + px[i]] == 1)
				cout << '1';
			else
				cout << '0';
		}
	}
	else
	{
		loop(m, n, a, x);
		loop(m, n + x, a, x);
		loop(m + x, n, a, x);
		loop(m + x, n + x, a, x);
	}
	cout << ')';
}

void loop(int m, int n, int a, int x)
{
	int check{ 0 };
	if (arr[m][n] == 1)
	{
		for (int k{ m }; k < m + x; k++)
		{
			for (int l{ n }; l < n + x; l++)
			{
				if (arr[k][l] == 0)
				{
					check = 1;
					break;
				}
			}
		}
		if (check == 0)
		{
			cout << '1';
		}
		else
		{
			find(m, n, a / 2, x / 2);
		}
	}
	else
	{
		for (int k{ m }; k < m + x; k++)
		{
			for (int l{ n }; l < n + x; l++)
			{
				if (arr[k][l] == 1)
				{
					check = 1;
					break;
				}
			}
		}
		if (check == 0)
		{
			cout << '0';
		}
		else
		{
			find(m, n, a / 2, x / 2);
		}
	}
}

int main()
{

	int a;
	cin >> a;
	for (int i{ 0 }; i < a; i++)
	{
		for (int j{ 0 }; j < a; j++)
		{
			cin >> arrc[i][j];
		}
	}
	int checkone{ 0 };
	int checkzero{ 0 };
	for (int i{ 0 }; i < a; i++)
	{
		for (int j{ 0 }; j < a; j++)
		{
			arr[i][j] = arrc[i][j] - '0';
			if (arr[i][j] == 1)
				checkzero = 1;
			if (arr[i][j] == 0)
				checkone= 1;
		}
	}
	if (checkzero == 0)
		cout << '0';
	else if (checkone == 0)
		cout << '1';
	else
		find(0, 0, a, a / 2);
}