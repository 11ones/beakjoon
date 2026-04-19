// 2023년 3월 27일 17:17:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	while (!(a == 0 && b == 0 && c == 0))
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c) cout << "Equilateral\n";
			else if (a == b || b == c || c == a) cout << "Isosceles\n";
			else cout << "Scalene\n";
		}
		else cout << "Invalid\n";
		cin >> a >> b >> c;
	}
}