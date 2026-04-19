// 2022년 5월 19일 22:50:19
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	int x{ 0 };
	int i{ 0 };
	while (x < n)
	{
		i++;
		x += i;
	}
	if (x == n)
		cout << i;
	else
		cout << i - 1;
}