// 2022년 4월 29일 14:51:45
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int hip[200000];

int top = 0;

int c(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > *(int*)b)
		return -1;
	else
		return 0;
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
		{
			hip[top++] = x;
			qsort(hip, top, 4, c);
		}
		else
			printf("%u\n", hip[--top]);
	}
}