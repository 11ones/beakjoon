// 2022년 5월 1일 22:49:05
// 틀렸습니다
// KB
// ms
#include <stdio.h>

long long a, b;
long long count = 0;
long long sav = 0;

void find(int k, int m, int n)
{
	if (k == 1)
	{
		if (m == a && n == b)
			sav += count;
		else if (m == a && n + 1 == b)
			sav += count + 1;
		else if (m + 1 == a && n == b)
			sav += count + 2;
		else if (m + 1 == a && n + 1 == b)
			sav += count + 3;
		else
			count += 4;
	}
	else
	{
		if (a < m + k && b < m + k)
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
	scanf("%d %d %d", &n, &a, &b);
	long long k = 1;
	for (int i = 1; i < n; i++)
		k *= 2;
	if (k == 1)
	{
		if (a == 0 && b == 0)
			sav = 0;
		else if (a == 0 && b == 1)
			sav = 1;
		else if (a == 1 && b == 0)
			sav = 2;
		else if (a == 1 && b == 1)
			sav = 3;
	}
	else
		find(k, 0, 0);
	printf("%lld", sav);
}