// 2022년 10월 25일 22:36:42
// 시간 초과
// KB
// ms
#include <iostream>
#include <algorithm>
using namespace std;

int arro[1000000];
int arrt[1000000];
int arr[1000000];

int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
		cin >> arr[i];
	int y = 0;
	arro[y] = arr[y];
	for (int i = 1; i < x; i++)
	{
		copy(arro, arro + y + 1, arrt);
		if (binary_search(arro, arro + y + 1, arr[i]))
			continue;
		y++;
		arrt[y] = arr[i];

		sort(arrt, arrt + y + 1);
		int p = lower_bound(arrt, arrt + y + 1, arr[i]) - arrt;
		arro[p] = arr[i];
		if (p != y)
			y--;
	}
	cout << y + 1;
}