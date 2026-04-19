// 2022년 4월 29일 14:45:44
// 시간 초과
// KB
// ms
#include <stdio.h>

int hip[100000];

int top = 0;

int minimum()
{
	unsigned int min = 2147483648;
	int pmin = -1;
	for (int i = 0; i < top; i++)
		if (min > hip[i] && hip[i] != 0)
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
		unsigned int x;
		scanf("%u", &x);
		if (x != 0)
			hip[top++] = x;
		else
			printf("%u\n", minimum());
	}
}