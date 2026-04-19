// 2022년 6월 3일 20:36:29
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <bool, 1001> check{ 0 };

	int x{ 0 };
	cin >> x;

	int answer{ 0 };
	int k{ 0 };

	while (x-- > 0)
	{
		cin >> k;

		if (!check[k])
		{
			check[k]=true;
			answer++;
		}
	}
	cout << answer;
}