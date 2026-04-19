// 2022년 6월 3일 20:36:00
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <bool, 1001> check{ 0 };
	array <int, 1000> arr{ 0 };

	int x{ 0 };
	cin >> x;

	int answer{ 0 };
	int k{ 0 };

	while (x-- > 0)
	{
		cin >> k;

		if (!check[k])
		{
			check[k]++;
			answer++;
		}
	}
	cout << answer;
}