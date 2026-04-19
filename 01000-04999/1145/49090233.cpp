// 2022년 9월 13일 19:15:02
// 맞았습니다!!
// 2020KB
// 12ms
#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	for (int i = 1; i < 100 * 99 * 98; i++)
	{
		int check = 0;
		for (int elem : arr)
		{
			if (i % elem == 0)
				check++;
		}
		if (check >= 3)
		{
			cout << i;
			break;
		}
	}
}