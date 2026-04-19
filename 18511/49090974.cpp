// 2022년 9월 13일 19:33:15
// 출력 초과
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
		cout << s << "\n";
		for (int elem : s)
		{
			bool check2 = 0;
			for (int elem2 : arr)
			{
				if (elem - '0' == elem2)
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