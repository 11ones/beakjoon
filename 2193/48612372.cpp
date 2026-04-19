// 2022년 9월 1일 22:44:38
// 틀렸습니다
// KB
// ms
#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int b = 1;
	for (int i = 0; i < n; i++)
		b *= 2;
	int c = 0;
	for (int i = b / 2; i < b; i++)
	{
		if (i & i >> 1)
			c++;
	}
	cout << b / 2 - c;
}