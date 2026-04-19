// 2022년 5월 27일 15:46:40
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <cstdlib>

using namespace std;

typedef unsigned long long U;

int main()
{
	U a, b, c;
	cin >> a >> b >> c;

	if (b >= c)
		cout << -1;
	else
		cout << (U)ceil(a / (c - b)) + 1;
}