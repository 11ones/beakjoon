// 2022년 5월 1일 18:08:52
// 컴파일 에러
// KB
// ms
#include <stdio.h>
#include <algorithm>

int queue[10000000];
int front;
int back;

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
			{
				std :: sort(queue + back, queue + front - 1);
				if (x == -1)
					back++;
				else
					front--;
			}
		}
		if (back >= front)
			printf("EMPTY\n");
		else
			printf("%d %d\n", queue[front - 1], queue[back]);
	}
}