// 2023년 2월 25일 22:30:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int x = n - 1, y = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < y; j++)
		{
			cout << "*";
		}
		cout << "\n";
		x--;
		y += 2;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < y; j++)
		{
			cout << "*";
		}
		cout << "\n";
		x++;
		y -= 2;
	}
}