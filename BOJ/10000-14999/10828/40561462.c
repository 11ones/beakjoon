// 2022년 3월 17일 11:48:30
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int stack[100];

int tops = -1;


void push(int x)
{
	stack[++tops] = x;
}

int pop()
{
	if (tops < 0)
		return -1;
	else
		return stack[tops--];
}

int size()
{
	return tops;
}

int empty()
{
	if (tops < 0)
		return 1;
	else
		return 0;
}

int top()
{
	if (tops < 0)
		return -1;
	else
		return stack[tops];
}


int main()
{
	int n;
	scanf("%d", &n);
	char arr[5][6] = { "pop", "size", "empty", "top", "push" };
	for (int i = 0; i < n; i++)
	{
		char order[10];
		scanf("%s", order);
		if (strncmp(order, arr[0], 3) == 0)
			printf("%d\n", pop());
		else if (strncmp(order, arr[1], 4) == 0)
			printf("%d\n", size());
		else if (strncmp(order, arr[2], 5) == 0)
			printf("%d\n", empty());
		else if (strncmp(order, arr[3], 3) == 0)
			printf("%d\n", top());
		else if (strncmp(order, arr[4], 4) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			push(x);
		}
	}
}