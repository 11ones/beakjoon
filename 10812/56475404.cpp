// 2023년 2월 25일 22:57:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int* arr = new int[n + 1] {};
	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int o = 0; o < m; o++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		vector <int> tmp;
		for (int i = z; i <= y; i++)
		{
			tmp.push_back(arr[i]);
		}
		for (int i = x; i < z; i++)
		{
			tmp.push_back(arr[i]);
		}
		for (int i = 0; i <= y - x; i++)
		{
			arr[x + i] = tmp[i];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}

}