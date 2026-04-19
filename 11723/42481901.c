// 2022년 4월 26일 19:19:29
// 맞았습니다!!
// 1116KB
// 944ms
#include <stdio.h>
#include <string.h>

int S[20];

void add(int x)
{
	S[x - 1] = x;
}

void rimove(int x)
{
	S[x - 1] = 0;
}

int check(int x)
{
	if (S[x - 1] == x)
		return 1;
	else
		return 0;
}

void toggle(int x)
{
	if (S[x - 1] == x)
		S[x - 1] = 0;
	else
		S[x - 1] = x;
}

void all()
{
	for (int i = 0; i < 20; i++)
		S[i] = i + 1;
}

void empty()
{
	for (int i = 0; i < 20; i++)
		S[i] = 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	char arr[6][7] = { "add", "remove", "check", "toggle", "all", "empty" };
	for (int i = 0; i < n; i++)
	{
		char order[10];
		scanf("%s", order);
		if (strncmp(order, arr[0], 3) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			add(x);
		}
		else if (strncmp(order, arr[1], 6) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			rimove(x);
		}
		else if (strncmp(order, arr[2], 5) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			printf("%d\n", check(x));
		}
		else if (strncmp(order, arr[3], 6) == 0)
		{
			int x = 0;
			scanf("%d", &x);
			toggle(x);
		}
		else if (strncmp(order, arr[4], 3) == 0)
			all();
		else
			empty();
	}
}