// 2022년 10월 4일 20:10:55
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	int k;
	cin >> N >> k;

	char arr[3];
	for (int i = 0; i < k; i++)
		cin >> arr[i];

	string sav = N;
	for (int i = 0; i < N.size(); i++)
		sav[i] = arr[0];
	if (stoi(sav) <= stoi(N))
	{
		for (int i = 0; i < N.size(); i++)
			sav[i] = arr[k - 1];
		int i = sav.size() - 1;
		while (stoi(sav) > stoi(N))
		{
			if (k > 2 && sav[i] == arr[2])
			{
				sav[i] = arr[1];
			}
			else if (k > 1 && sav[i] == arr[1])
			{
				sav[i] = arr[0];
			}
			else
			{
				sav[i--] = arr[k - 1];
				continue;
			}
			for (int j = sav.size() - 1; j > i; j--)
			{
				if (sav[j] != arr[0])
					i = j;
			}
		}
		cout << sav;
	}
	else
	{
		sav[sav.size() - 1] = '\0';
		for (int i = 0; i < sav.size() - 1; i++)
		{
			sav[i] = arr[k - 1];
		}
		cout << sav;
	}
}