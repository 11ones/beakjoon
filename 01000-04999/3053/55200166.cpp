// 2023년 2월 3일 17:27:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 3.14159265358979323846;
	long long x;
	cin >> x;
	cout << fixed << setprecision(6)
		<< x * x * pi << '\n' << x * x * 2;
}