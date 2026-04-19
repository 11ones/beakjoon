// 2023년 2월 9일 23:36:27
// 출력 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int arr[501][501];

int maxi(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j < i; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
			arr[n - i - 1][j] = maxi(arr[n - i][j], arr[n - i][j + 1]) + arr[n - i - 1][j];


	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
	cout << arr[1][0];
}