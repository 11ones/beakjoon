// 2022년 4월 22일 10:20:48
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int queue[1000];
int front = -1, back = -1;

void push(int a)
{
	queue[++back] = a;
}

int compare(const void* a, const void* b)
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
	int n;
	scanf("%d", &n);
	int x = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		int m, place;
		scanf("%d %d", &m, &place);
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			push(x);
		}
		while (1)
		{
			int check = 0;
			int y = queue[++front];
			int front_main = front, back_main=back;
			for (int k = front_main; k < back_main; k++)
			{
				if (queue[k] > y)
				{
					push(y);
					if (front == place)
					{
						place = back;
					}
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				count++;
				if (front == place)
					break;
			}
		}
		printf("%d\n", count);
		front = -1;
		back = -1;
	}
}