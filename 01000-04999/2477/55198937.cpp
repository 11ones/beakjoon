// 2023년 2월 3일 17:10:59
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int NIL, arr1[3], arr2[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> NIL >> arr1[i] >> NIL >> arr2[i];
	}
	int max1 = arr1[0], max1p = 0, max2 = arr2[0], max2p = 0;
	for (int i = 1; i < 3; i++)
	{
		if (max1 < arr1[i])
		{
			max1 = arr1[i];
			max1p = i;
		}
		if (max2 < arr2[i])
		{
			max2 = arr2[i];
			max2p = i;
		}
	}
	if (max1p == max2p)
	{
		cout << n * (max1 * max2 -
			arr1[(max1p + 2) % 3] * arr2[(max2p + 1) % 3]);
	}
	else
	{
		cout << n * (max1 * max2 -
			arr1[(max1p + 1) % 3] * arr2[(max2p + 2) % 3]);

	}
}