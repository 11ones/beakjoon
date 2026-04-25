// 2022년 6월 3일 20:51:19
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>

using namespace std;

array <int, 1005> arr{ 0 };

int main()
{
	int x;
	cin >> x;

	for (int i{ 0 }; i < x; i++)
	{
		cin >> arr[i];
	}

	int max{ 0 };

	for (int i{ 0 }; i < x; i++)
	{
		int sav = arr[i];
		int countnum{ 1 };

		for (int j{ i }; j < x; j++)
		{
			if (sav < arr[j])
			{
				countnum++;
				sav = arr[j];
			}
		}
		
		if (max < countnum)
			max = countnum;
	}
	cout << max;
}