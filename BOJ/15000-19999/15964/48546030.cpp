// 2022년 8월 31일 16:29:42
// 100점
// 2020KB
// 0ms
#include <iostream>
using namespace std;

long long pmlp(int a, int b)
{
	return (long long)(a + b) * (a - b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << pmlp(a, b);
}