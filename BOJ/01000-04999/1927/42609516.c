// 2022년 4월 29일 13:50:10
// 시간 초과
// KB
// ms
#include <stdio.h>

int hip[100000];

int top = 0;

int minimum()
{
	int min = 2147483647;
	int pmin = -1;
	for (int i = 0; i < top; i++)
	{
		if (min > hip[i] && hip[i] != 0)
		{
			min = hip[i];
			pmin = i;
		}
	}
	if (pmin == -1)
	{
		return 0;
	}
	else
	{
		hip[pmin] = 0;
		return min;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		if (x != 0)
		{
			hip[top++] = x;
		}
		else
		{
			printf("%d\n", minimum());
		}
	}
}