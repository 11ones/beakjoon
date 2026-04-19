// 2022년 11월 8일 20:09:34
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int x = 0;
int Max = -1'000'000'000, Min = 1'000'000'000;

void rec(int i, int res, int arr[], int op[])
{
	if (i == x)
	{
		if (res > Max)
			Max = res;
		if (res < Min)
			Min = res;
	}
	else
	{
		if (op[0] != 0)
		{
			op[0]--;
			res += arr[i];
			rec(i + 1, res, arr, op);
			res -= arr[i];
			op[0]++;
		}
		if (op[1] != 0)
		{
			op[1]--;
			res -= arr[i];
			rec(i + 1, res, arr, op);
			res += arr[i];
			op[1]++;
		}
		if (op[2] != 0)
		{
			op[2]--;
			res *= arr[i];
			rec(i + 1, res, arr, op);
			res /= arr[i];
			op[2]++;
		}
		if (op[3] != 0)
		{
			op[3]--;
			res /= arr[i];
			rec(i + 1, res, arr, op);
			op[3]++;
		}
	}
}

int main()
{
	cin >> x;
	int* arr = new int[x];
	for (int i = 0; i < x; i++)
		cin >> arr[i];
	int op[4];
	for (int i = 0; i < 4; i++)
		cin >> op[i];
	rec(1, arr[0], arr, op);
	cout << Max << endl << Min;
}