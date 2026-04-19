// 2022년 9월 20일 19:06:24
// 맞았습니다!!
// 2020KB
// 36ms
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	for (; n > 0; n--)
	{
		if (m - arr[n - 1] >= 0)
			break;
	}
	for (; n > 0; n--)
	{
		while (1)
		{
			m -= arr[n - 1];
			if (m <= 0)
				break;
			count++;
		}
		if ((m < 0 && n == 0) || m == 0)
			break;
		m += arr[n - 1];
	}
	cout << count + 1;
}