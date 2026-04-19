// 2022년 5월 1일 17:51:43
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int queue[1000];
int front;
int back;

int c(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int l = 0; l < t; l++)
	{
		front = 0;
		back = 0;
		int n;
		scanf("%d", &n);
		for (int h = 0; h < n; h++)
		{
			char ch;
			int x;
			scanf(" %c %d", &ch, &x);
			if (ch == 'I')
				queue[front++] = x;
			else if (back < front)
				if (x == -1)
					back++;
				else
					front--;
			qsort(queue + back, front - back, 4, c);
		}
		if (back >= front)
			printf("EMPTY\n");
		else
			printf("%d %d\n", queue[front - 1], queue[back]);
	}
}