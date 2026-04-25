// 2022년 3월 17일 12:20:50
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int queue[1000];

int fronts = 1000;

void push(int x)
{
	queue[--fronts] = x;
}

int pop()
{
	if (fronts >= 1000)
		return -1;
	else
		return queue[fronts++];
}

int size()
{
	return 1000 - fronts;
}

int empty()
{
	if (fronts >= 1000)
		return 1;
	else
		return 0;
}

int front()
{
	if (fronts >= 1000)
		return -1;
	else
		return queue[fronts];
}
int back()
{
	if (fronts >= 1000)
		return -1;
	else
		return queue[999];
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