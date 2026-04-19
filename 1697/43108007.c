// 2022년 5월 10일 21:36:07
// 시간 초과
// KB
// ms
#include <stdio.h>

int dpc[200001] = { 0 };
int a, b;

void find(int x)
{
	if (x != b && x > 0)
	{
		if (x < b && (dpc[2 * x] == 0 || dpc[2 * x] > dpc[x] + 1))
		{
			dpc[2 * x] = dpc[x] + 1;
			find(2 * x);
		}
		if (x < b && (dpc[x + 1] == 0 || dpc[x + 1] > dpc[x] + 1))
		{
			dpc[x + 1] = dpc[x] + 1;
			find(x + 1);
		}
		if (x != b && (dpc[x - 1] == 0 || dpc[x - 1] > dpc[x] + 1))
		{
			dpc[x - 1] = dpc[x] + 1;
			find(x - 1);
		}
	}
}

int main()
{
	scanf("%d %d", &a, &b);
	dpc[a] = 1;
	find(a);
	printf("%d", dpc[b] - 1);
}