// 2022년 3월 17일 12:34:26
// 맞았습니다!!
// 1156KB
// 0ms
#include <stdio.h>
#include <string.h>

int queue[10000];

int backs = -1;
int fronts = -1;

void push(int x)
{
	queue[++backs] = x;
}

int pop()
{
	if (fronts >= backs)
		return -1;
	else
		return queue[++fronts];
}

int size()
{
	return backs - fronts;
}

int empty()
{
	if (fronts >= backs)
		return 1;
	else
		return 0;
}

int front()
{
	if (fronts >= backs)
		return -1;
	else
		return queue[fronts + 1];
}
int back()
{
	if (fronts >= backs)
		return -1;
	else
		return queue[backs];
}


int main()
{
	int n;
	scanf("%d", &n);
	char arr[6][6] = { "pop", "size", "empty", "front", "back", "push"};
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
		else if (strncmp(order, arr[3], 5) == 0)
			printf("%d\n", front());
		else if (strncmp(order, arr[4], 4) == 0)
			printf("%d\n", back());
		else if (strncmp(order, arr[5], 4) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			push(x);
		}
	}
}