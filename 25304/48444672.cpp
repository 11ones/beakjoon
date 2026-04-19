// 2022년 8월 29일 14:27:58
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int main()
{
	int x, i, sum = 0;
	cin >> x;
	cin >> i;
	for (; i > 0; i--)
	{
		int a, b;
		cin >> a >> b;
		sum += a * b;
	}
	if (x == sum)
		cout << "Yes";
	else
		cout << "No";
}