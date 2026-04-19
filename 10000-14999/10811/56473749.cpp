// 2023년 2월 25일 22:25:04
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

	int n, m;
	cin >> n >> m;
	int* arr = new int[n + 1];
	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int i = x; i < (y + x + 1) / 2; i++)
		{
			int tmp = arr[i];
			arr[i] = arr[y - i + x];
			arr[y - i + x] = tmp;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
}