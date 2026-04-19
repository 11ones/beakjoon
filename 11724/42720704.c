// 2022년 5월 1일 23:37:37
// 맞았습니다!!
// 5020KB
// 412ms
#include <stdio.h>

typedef struct
{
	int a;
	int b;
}Connection;

Connection connection[499501];
int check[1001] = { 0 };

void find(int x, int b)
{
	check[x] = 1;
	for (int i = 1; i <= b; i++)
	{
		if (connection[i].a == x && check[connection[i].b] == 0)
		{
			find(connection[i].b, b);
		}
		if (connection[i].b == x && check[connection[i].a] == 0)
		{
			find(connection[i].a, b);
		}
	}
}

int main()
{

	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		scanf("%d %d", &connection[i].a, &connection[i].b);
	}
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (check[i] == 0)
		{
			count++;
			find(i, b);
		}
	}
	printf("%d", count);
}