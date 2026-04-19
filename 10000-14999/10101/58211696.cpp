// 2023년 3월 27일 17:06:57
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

	if (a + b + c == 180)
	{
		if (a == b && b == c) cout << "Equilateral";
		else if (a == b || b == c || c == a) cout << "Isosceles";
		else cout << "Scalene";
	}
	else cout << "Error";
	
}