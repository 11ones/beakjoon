// 2022년 9월 13일 20:43:48
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
#include <algorithm>
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
	sort(arr, arr + k);
	string s = to_string(n);

	for (int i = 0; i < s.size(); i++)
	{
		int check2 = 0;
		while (1)
		{
			int check = 0;
			for (int elem : arr)
			{
				if (elem == s[i] - '0')
				{
					check = 1;
				}
			}
			if (check == 1)
				break;
			if (s[i] == '0')
			{
				for (int j = i + 1; j < s.size(); j++)
				{
					s[j] = '9';
				}
				if (i != 0)
				{
					s[i - 1]--;
					i = i - 2;
					check2 = 1;
				}
				break;
			}
			s[i]--;
			if (i != s.size() - 1)
				s[i + 1] = '9';
		}
		if (check2 == 1)
			continue;
	}
	if (s[0] == '0')
		for (int i = 1; i < s.size(); i++)
			cout << s[i];
	else
		cout << s;
}