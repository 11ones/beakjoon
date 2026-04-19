// 2022년 9월 20일 20:43:59
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

char Af[50][50];
int A[50][50];
int B[50][50];
int n, m;

void change(int y, int x)
{
	for (int i = y; i < y + 3; i++)
		for (int j = x; j < x + 3; j++)
			if (A[i][j] == 1)
			{
				A[i][j] = 0;
			}
			else
			{
				A[i][j] = 1;
			}
}

int diff()
{
	int cdiff = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (A[i][j] || B[i][j])
				cdiff++;
	return cdiff;
}

int main()
{
	cin >> n >> m;
	int max = 0;
	char x;

	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < m; j++)
		{
			cin >> x;
			A[i][j] = x - '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> x;
			B[i][j] = x - '0';
		}
	}
	if (n < 3 || m < 3)
	{
		if (diff() == 0)
			cout << "0";
		else
			cout << "-1";
	}
	else
	{
		//전부 0으로 만들거임	

		for (int i = 0; i < n - 2; i++)
		{
			for (int j = 0; j < m - 2; j++)
			{
				if (A[i][j] == 1)
				{
					change(i, j);
					max++;
				}
			}
		}
		if (diff() == 0)
			cout << max;
		else
			cout << "-1";
	}
}