// 2022년 5월 13일 23:31:14
// 맞았습니다!!
// 2148KB
// 0ms
#include <iostream>
#include <array>
#include <queue>

using namespace std;

array <array<char, 100>, 100> arr;
array <array<bool, 100>, 100> check;

int n;

bool findR(int a, int b)
{
	bool yes{ 0 };
	if (arr[a][b] == 'R' && check[a][b] == 0)
	{
		yes = 1;
		check[a][b] = 1;
		array <int, 4> py{ 0,0,-1,1 };
		array <int, 4> px{ -1,1,0,0 };
		for (int i{ 0 }; i < 4; i++)
		{
			if (a + py[i] < 0 || a + py[i] >= n || b + px[i] < 0 || b + px[i] >= n)
				continue;
			if (arr[a + py[i]][b + px[i]] == 'R' && check[a + py[i]][b + px[i]] == 0)
			{
				findR(a + py[i], b + px[i]);
			}
		}
	}
	return yes;
}

bool findG(int a, int b)
{
	bool yes{ 0 };
	if (arr[a][b] == 'G' && check[a][b] == 0)
	{
		yes = 1;
		check[a][b] = 1;
		array <int, 4> py{ 0,0,-1,1 };
		array <int, 4> px{ -1,1,0,0 };
		for (int i{ 0 }; i < 4; i++)
		{
			if (a + py[i] < 0 || a + py[i] >= n || b + px[i] < 0 || b + px[i] >= n)
				continue;
			if (arr[a + py[i]][b + px[i]] == 'G' && check[a + py[i]][b + px[i]] == 0)
			{
				findG(a + py[i], b + px[i]);
			}
		}
	}
	return yes;
}

bool findB(int a, int b)
{
	bool yes{ 0 };
	if (arr[a][b] == 'B' && check[a][b] == 0)
	{
		yes = 1;
		check[a][b] = 1;
		array <int, 4> py{ 0,0,-1,1 };
		array <int, 4> px{ -1,1,0,0 };
		for (int i{ 0 }; i < 4; i++)
		{
			if (a + py[i] < 0 || a + py[i] >= n || b + px[i] < 0 || b + px[i] >= n)
				continue;
			if (arr[a + py[i]][b + px[i]] == 'B' && check[a + py[i]][b + px[i]] == 0)
			{
				findB(a + py[i], b + px[i]);
			}
		}
	}
	return yes;
}

bool findRG(int a, int b)
{
	bool yes{ 0 };
	if ((arr[a][b] == 'R' || arr[a][b] == 'G') && check[a][b] == 1)
	{
		yes = 1;
		check[a][b] = 0;
		array <int, 4> py{ 0,0,-1,1 };
		array <int, 4> px{ -1,1,0,0 };
		for (int i{ 0 }; i < 4; i++)
		{
			if (a + py[i] < 0 || a + py[i] >= n || b + px[i] < 0 || b + px[i] >= n)
				continue;
			if ((arr[a + py[i]][b + px[i]] == 'R' || arr[a + py[i]][b + px[i]] == 'G') && check[a + py[i]][b + px[i]] == 1)
			{
				findRG(a + py[i], b + px[i]);
			}
		}
	}
	return yes;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int countR{ 0 };
	int countG{ 0 };
	int countB{ 0 };
	int countRG{ 0 };
	cin >> n;
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			if (findR(i, j))
			{
				countR++;
			}
			if (findG(i, j))
			{
				countG++;
			}
			if (findB(i, j))
			{
				countB++;
			}
		}
	}
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			if (findRG(i, j))
			{
				countRG++;
			}
		}
	}
	cout << countR + countG + countB << ' ' << countRG + countB;
}