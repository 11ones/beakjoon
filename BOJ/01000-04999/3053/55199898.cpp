// 2023년 2월 3일 17:23:43
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 3.1415926535;
	int x;
	cin >> x;
	cout << fixed << setprecision(6)
		<< x * x * pi << '\n' << (double)x * x * 2;
}