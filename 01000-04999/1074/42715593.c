// 2022년 5월 1일 21:58:20
// 시간 초과
// KB
// ms
#include <stdio.h>

int a, b;
long long count = 0;
long long sav;
void find(int k, int m, int n)
{
	if (k == 1)
	{
		if (m == a && n == b)
			sav = count;
		else if (m + 1 == a && n == b)
			sav = count + 1;
		else if (m == a && n + 1 == b)
			sav = count + 2;
		else if (m + 1 == a && n + 1 == b)
			sav = count + 3;
		else
			count += 4;
	}
	else
	{
		find(k / 2, m, n);
		find(k / 2, m + k, n);
		find(k / 2, m, n + k);
		find(k / 2, m + k, n + k);
	}
}

int main()
{
	int n;
	scanf("%d %d %d", &n, &a, &b);
	int k = 1;
	for (int i = 1; i < n; i++)
		k *= 2;
	find(k, 0, 0);
	printf("%lld", sav);
}