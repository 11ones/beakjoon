// 2022년 5월 12일 15:20:25
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string arr;
vector <int> v;

int main()
{
	int n, m;
	cin >> n >> m;
	cin >> arr;
	int len = arr.length();
	if (n >= 500000)
		printf("0");
	else
	{
		int k{ 0 };
		int check{ 0 };
		int count{ 0 };
		for (int i = 0; i < len; i++)
		{
			if (arr[i] == 'I' && check == 0)
			{
				check = 1;
			}
			else if (arr[i] == 'O' && check == 1)
			{
				check = 2;
			}
			else if (arr[i] == 'I' && check == 2)
			{
				count++;
				check = 1;
			}
			else if (arr[i] == 'O' && check == 2)
			{
				v.push_back(count);
				count = 0;
				check = 0;
			}
			else if (arr[i] == 'I' && check == 1)
			{
				v.push_back(count);
				count = 0;
				check = 1;
			}
		}
	}
	int answer{ 0 };
	for (int elem : v)
	{
		if (elem - n + 1 > 0)
			answer += elem - n + 1;
	}
	cout << answer;
}