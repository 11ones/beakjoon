// 2022년 5월 3일 20:41:18
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
	int b;
}Connection;

Connection connection[10000];
int checkDFS[1001] = { 0 };
int DFS[1001];
int k;
int l;
void dfs(int x, int b)
{
	checkDFS[x] = 1;
	DFS[k++] = x;
	for (int i = 0; i < b; i++)
	{
		if (connection[i].a == x && checkDFS[connection[i].b] == 0)
		{
			dfs(connection[i].b, b);
		}
		if (connection[i].b == x && checkDFS[connection[i].a] == 0)
		{
			dfs(connection[i].a, b);
		}
	}
}

int checkBFS[1001] = { 0 };
int BFS[1001];
int queue[10000];
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

void bfs(int x, int b)
{
	checkBFS[x] = 1;
	BFS[l++] = x;
	push(x);
	int p;
	while (1)
	{
		p = pop();
		if (p == -1)
			break;
		for (int i = 0; i < b; i++)
		{
			if (connection[i].a == p && checkBFS[connection[i].b] == 0)
			{
				BFS[l++] = connection[i].b;
				checkBFS[connection[i].b]++;
				push(connection[i].b);
			}
			if (connection[i].b == p && checkBFS[connection[i].a] == 0)
			{
				BFS[l++] = connection[i].a;
				checkBFS[connection[i].a]++;
				push(connection[i].a);
			}
		}
	}
}

static int compare(const void* a, const void* b)
{
	if (((Connection*)a)->a < ((Connection*)b)->a)
		return -1;
	else if (((Connection*)a)->a > ((Connection*)b)->a)
		return 1;
	else if (((Connection*)a)->b < ((Connection*)b)->b)
		return -1;
	else if (((Connection*)a)->b > ((Connection*)b)->b)
		return 1;
	else
		return 0;
}


int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0; i < b; i++)
	{
		scanf("%d %d", &connection[i].a, &connection[i].b);
	}
	qsort(connection, b, sizeof(connection[0]), compare);
	k = 0;
	dfs(c, b);
	l = 0;
	bfs(c, b);
	for (int i = 0; i < k; i++)
		printf("%d ", DFS[i]);
	printf("\n");
	for (int i = 0; i < l; i++)
		printf("%d ", BFS[i]);
}