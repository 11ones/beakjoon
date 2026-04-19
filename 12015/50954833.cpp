// 2022년 10월 25일 22:48:35
// 시간 초과
// KB
// ms
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
	int back = 0;
	int front = 0;
	arro[back] = arr[back];
	for (int i = 1; i < x; i++)
	{
		if (binary_search(arro + front, arro + back + 1, arr[i]))
			continue;
		back++;
		arro[back] = arr[i];

		sort(arro + front, arro + back + 1);
		int p = lower_bound(arro + front, arro + back + 1, arr[i]) - arro;
		if (p != back)
		{
			arro[p + 1] = 0;
			sort(arro + front, arro + back + 1);
			front++;
		}
	}
	cout << back - front + 1;
}