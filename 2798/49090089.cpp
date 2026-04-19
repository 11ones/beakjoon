// 2022년 9월 13일 19:11:02
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int t, m, max = 0;
	cin >> t >> m;
	int arr[100];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < t - 2; i++)
	{
		for (int j = i + 1; j < t - 1; j++)
		{
			for (int k = j + 1; k < t; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= m && max < arr[i] + arr[j] + arr[k])
				{
					max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	cout << max;
}