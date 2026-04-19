// 2022년 5월 24일 22:16:30
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array<array<int, 8>, 70> arr{ 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	array <int, 8> num{ 1,2,3,4,5,6,7,8 };
	array <int, 9> digit{ 1,2,4,8,16,32,64,128,256 };
	int n, m;

	cin >> n >> m;
	int k{ 0 };
	for (int i{ 1 }; i < digit[n]; i++)
	{
		int countdigit{ 0 };
		for (int j{ 0 }; j < n; j++)
		{
			if (i & digit[j])
			{
				countdigit++;
			}
		}
		if (countdigit == m)
		{
			int x{ 0 };
			for (int j{ 0 }; j < n; j++)
			{
				if (i & digit[j])
				{
					arr[k][x++] = num[j];
				}
			}
			k++;
		}
	}
	sort(arr.begin(), arr.end());
	for (int i{ 0 }; i < k; i++)
	{
		for (int j{ 0 }; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}