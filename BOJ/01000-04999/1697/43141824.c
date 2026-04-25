// 2022년 5월 11일 15:45:15
// 맞았습니다!!
// 2288KB
// 0ms
#include <stdio.h>

int checkBFS[200001];
int queue[100000];
int front = -1, back = -1;

void push(int x)
{
	queue[++front] = x;
}

int pop()
{
	if (front <= back)
		return -1;
	else
		return queue[++back];
}

int bfs(int a, int b)
{
	checkBFS[a] = 1;
	push(a);
	int p;
	while (1)
	{
		p = pop();
		if (2 * p == b || p + 1 == b || p - 1 == b)
			return checkBFS[p];
		if (p < b && checkBFS[2 * p] == 0)
		{
			push(2 * p);
			checkBFS[2 * p] = checkBFS[p] + 1;
		}
		if (p < b && checkBFS[p + 1] == 0)
		{
			push(p + 1);
			checkBFS[p + 1] = checkBFS[p] + 1;
		}
		if (p > 0 && checkBFS[p - 1] == 0)
		{
			push(p - 1);
			checkBFS[p - 1] = checkBFS[p] + 1;
		}
	}
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("0");
	else
		printf("%d", bfs(a, b));
}