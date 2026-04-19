// 2022년 5월 16일 22:38:59
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <array>
#include <string>

using namespace std;

array <char, 10> arr{ 0 };

int main()
{
	string x;
	cin >> x;
	for(int elem : x)
	{
		arr[elem - '0']++;
	}
	int max{ 0 };
	for (int i{ 0 }; i < 9; i++)
	{
		if (i != 6 && max < arr[i])
			max = arr[i];
	}
	int sixnine{ arr[6] + arr[9] };
	if (sixnine % 2 == 0)
	{
		if (max < sixnine / 2)
			max = sixnine / 2;
	}
	else
	{
		if (max < sixnine / 2 + 1)
			max = sixnine / 2 + 1;
	}

	cout << max;
}