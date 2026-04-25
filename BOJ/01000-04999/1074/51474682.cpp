// 2022년 11월 8일 20:10:52
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int a, b;
int sav = 0;

void find(int k, int m, int n)
{
	if (k == 1)
	{
		if (m == a && n == b)
			sav += 0;
		else if (m == a && n + 1 == b)
			sav += 1;
		else if (m + 1 == a && n == b)
			sav += 2;
		else
			sav += 3;
	}
	else
	{
		if (a < m + k && b < n + k)
		{
			sav += 0;
			find(k / 2, m, n);
		}
		else if (a < m + k && b >= n + k)
		{
			sav += k * k;
			find(k / 2, m, n + k);
		}
		else if (a >= m + k && b < n + k)
		{
			sav += k * k * 2;
			find(k / 2, m + k, n);
		}
		else
		{
			sav += k * k * 3;
			find(k / 2, m + k, n + k);
		}
	}
}

int main()
{
	int n;
    cin >> n >> a >> b;
	int k = 1;
	for (int i = 1; i < n; i++)
		k *= 2;
	find(k, 0, 0);
	cout << sav;
}