// 2022년 4월 29일 13:56:02
// 틀렸습니다
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
		if (min > hip[i])
		{
			min = hip[i];
			pmin = i;
		}
	if (pmin == -1)
		return 0;
	else
	{
		for (int i = pmin; i < top; i++)
			hip[i] = hip[i + 1];
		top--;
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
			hip[top++] = x;
		else
			printf("%d\n", minimum());
	}
}