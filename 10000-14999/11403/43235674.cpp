// 2022년 5월 13일 13:42:57
// 맞았습니다!!
// 2156KB
// 12ms
#include <iostream>
#include <vector>
#include <array>

using namespace std;

typedef struct
{
	int x;
	int y;
}Connect;

vector <Connect> connect;
vector <int> arr;
array <bool, 101> check{ 0 };

void x_to_y(int i)
{
	int len{ (int)connect.size() };
	for (int j{ 0 }; j < len; j++)
	{
		if (connect[j].x == i && check[connect[j].y] == 0)
		{
			arr.push_back(connect[j].y);
			check[connect[j].y] = 1;
			x_to_y(connect[j].y);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			int x;
			cin >> x;
			if (x == 1)
				connect.push_back({ i, j });
		}
	}
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			check[j] = 0;
		}
		x_to_y(i);
		for (int j{ 0 }; j < n; j++)
		{
			cout << check[j] << ' ';
		}
		cout << '\n';
	}
}