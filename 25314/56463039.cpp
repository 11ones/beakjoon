// 2023년 2월 25일 18:13:46
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

	int n;
	cin >> n;
	n /= 4;
	for (int i = 0; i < n; i++)
	{
		cout << "long ";
	}
	cout << "int";
}