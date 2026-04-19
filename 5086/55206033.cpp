// 2023년 2월 3일 19:13:18
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		if (b % a == 0) cout << "factor\n";
		else if (a % b == 0) cout << "multiple\n";
		else cout << "neither\n";
		cin >> a >> b;
	}
}