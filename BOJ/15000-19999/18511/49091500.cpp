// 2022년 9월 13일 19:45:40
// 시간 초과
// KB
// ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int arr[3];
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	}
	for (int i = n; i > 0; i--)
	{
		bool check = 0;
		string s = to_string(i);
		for (int elem : s)
		{
			bool check2 = 0;
			for (int j = 1; j <= k; j++)
			{
				if (elem - '0' == arr[k - j])
				{
					check2 = 1;
					break;
				}
			}
			if (check2 == 0)
			{
				check = 1;
				break;
			}

		}
		if (check == 0)
		{
			cout << i;
			break;
		}
	}
}