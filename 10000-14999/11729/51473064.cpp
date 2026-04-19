// 2022년 11월 8일 19:31:18
// 맞았습니다!!
// 2020KB
// 180ms
#include <iostream>
using namespace std;

int hanoicount(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else 
	{
		return 2 * hanoicount(x - 1) + 1;
	}
}

void hanoi(int x, int st, int ed)
{
	int m = 6 - st - ed;
	if (x == 1)
		cout << st << " " << ed << "\n";
	else
	{
		hanoi(x - 1, st, m);
		hanoi(1, st, ed);
		hanoi(x - 1, m, ed);
	}
}

int main()
{
	int x;
	cin >> x;
	cout << hanoicount(x) << "\n";
	hanoi(x, 1, 3);

}