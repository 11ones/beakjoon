// 2022년 10월 25일 22:57:25
// 맞았습니다!!
// 9832KB
// 496ms
#include <iostream>
#include <algorithm>
using namespace std;

int arro[1000000];
int arr[1000000];

int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
		cin >> arr[i];
	int max = 0;
	arro[0] = arr[0];
	for (int i = 1; i < x; i++)
	{
		int p = lower_bound(arro, arro + max + 1, arr[i]) - arro;
		arro[p] = arr[i];
		if (max < p)
			max = p;
	}
	cout << max + 1;
}