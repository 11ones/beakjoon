// 2023년 2월 3일 21:45:04
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	cin >> x;
	int* arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < x; i++)
	{
		int a = arr[0];
		int b = arr[i];
		int c;
		while (b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		cout << arr[0] / a << '/' << arr[i] / a << '\n';
	}
}