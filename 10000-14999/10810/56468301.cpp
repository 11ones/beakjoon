// 2023년 2월 25일 20:22:20
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
	int* arr = new int[n + 1] {};
	for (int i = 0; i < m; i++)
	{
		int x, y, k;
		cin >> x >> y >> k;
		for (x; x <= y; x++)
		{
			arr[x] = k;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
}