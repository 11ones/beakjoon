// 2023년 2월 3일 21:39:43
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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
		int a = tmp;
		int b = arr[i] - arr[i - 1];
		int c;
		while (b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		tmp = a;
	}
	vector<int> v;
	for (int i = 2; i * i <= tmp; i++)
	{
		if (tmp % i == 0) v.push_back(i);
	}
	int len = v.size();
	for (int i = 0; i < len; i++)
	{
		if (v[i] != tmp / v[i])v.push_back(tmp / v[i]);
	}
	sort(v.begin(), v.end());
	v.push_back(tmp);
	for (int elem : v)
		cout << elem << " ";
}