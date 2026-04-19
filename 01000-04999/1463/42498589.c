// 2022년 4월 27일 00:33:28
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>

int dp[100001] = { 0 };
int dpc[100001] = { 0 };

void find(int x)
{
	dp[x] = x;
	for (int i = x; i > 0; i--)
	{
		if (dp[i - 1] == 0 || dpc[i - 1] > dpc[i] + 1)
		{
			dp[i - 1] = dp[i] - 1;
			dpc[i - 1] = dpc[i] + 1;
		}
		if (dp[i] % 3 == 0 && (dp[i / 3] == 0 || dpc[i / 3] > dpc[i] + 1))
		{
			dp[i / 3] = dp[i] / 3;
			dpc[i / 3] = dpc[i] + 1;
		}
		if (dp[i] % 2 == 0 && (dp[i / 2] == 0 || dpc[i / 2] > dpc[i] + 1))
		{
			dp[i / 2] = dp[i] / 2;
			dpc[i / 2] = dpc[i] + 1;
		}	
	}
}

int main()
{
	int x;
	scanf("%d", &x);
	find(x);
	printf("%d", dpc[1]);
}