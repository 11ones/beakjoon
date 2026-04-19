// 2023년 3월 27일 17:06:15
// 틀렸습니다
// KB
// ms
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
		if (a == b == c) cout << "Equilateral";
		else if (a == b || b == c || c == a) cout << "Isosceles";
		else cout << "Scalene";
	}
	else cout << "Error";
	
}