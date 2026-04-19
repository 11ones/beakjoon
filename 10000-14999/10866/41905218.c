// 2022년 4월 13일 11:57:17
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <string.h>

int deck[20000];

int backs = 10000;
int fronts = 10000;

void push_front(int x)
{
	deck[++fronts] = x;
}

void push_back(int x)
{
	deck[--backs] = x;
}

int pop_front()
{
	if (fronts <= backs)
		return -1;
	else
		return deck[fronts--];
}

int pop_back()
{
	if (fronts <= backs)
		return -1;
	else
		return deck[backs++];
}

int size()
{
	return fronts - backs;
}

int empty()
{
	if (fronts <= backs)
		return 1;
	else
		return 0;
}

int front()
{
	if (fronts <= backs)
		return -1;
	else
		return deck[fronts];
}
int back()
{
	if (fronts <= backs)
		return -1;
	else
		return deck[backs];
}


int main()
{
	int n;
	scanf("%d", &n);
	char arr[8][11] = { "push_front", "push_back", "pop_front", "pop_back", "size", "empty", "front", "back" };
	for (int i = 0; i < n; i++)
	{
		char order[20];
		scanf("%s", order);
		if (strncmp(order, arr[0], 10) == 0)
			{
			int x = 0;
			scanf("%d", &x);
			push_front(x);
		}
		else if (strncmp(order, arr[1], 10) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			push_back(x);
		}
		else if (strncmp(order, arr[2], 10) == 0)
			printf("%d\n", pop_front());
		else if (strncmp(order, arr[3], 10) == 0)
			printf("%d\n", pop_back());
		else if (strncmp(order, arr[4], 4) == 0)
			printf("%d\n", size());
		else if (strncmp(order, arr[5], 5) == 0)
			printf("%d\n", empty());
		else if (strncmp(order, arr[6], 5) == 0)
			printf("%d\n", front());
		else if (strncmp(order, arr[7], 4) == 0)
			printf("%d\n", back());
	}
}