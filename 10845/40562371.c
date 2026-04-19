// 2022년 3월 17일 12:14:59
// 시간 초과
// KB
// ms
#include <stdio.h>
#include <string.h>

int queue[1000];

int fronts = -1;
int backs = -1;

void push(int x)
{
	queue[++backs] = x;
}

int pop()
{
	if (backs <= fronts)
		return -1;
	else
		return queue[++fronts];
}

int size()
{
	return backs - fronts + 1;
}

int empty()
{
	if (backs <= fronts)
		return 1;
	else
		return 0;
}

int front()
{
	if (backs <= fronts)
		return -1;
	else
		return queue[0];
}
int back()
{
	if (backs <= fronts)
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