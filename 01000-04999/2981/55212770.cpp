// 2023년 2월 3일 21:31:56
// 시간 초과
// KB
// ms
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	cin >> x;
	int* arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + x);
	int tmp = arr[1] - arr[0];
	for (int i = 2; i < x; i++)
	{
		tmp = gcd(tmp, arr[i] - arr[i - 1]);
	}
	for (int i = 2; i <= tmp; i++)
	{
		if (tmp % i == 0) cout << i << " ";
	}
}