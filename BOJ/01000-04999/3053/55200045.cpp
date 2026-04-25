// 2023년 2월 3일 17:25:45
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 3.1415926535;
	long long x;
	cin >> x;
	cout << fixed << setprecision(6)
		<< x * x * pi << '\n' << x * x * 2;
}