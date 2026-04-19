// 2022년 4월 27일 17:17:05
// 맞았습니다!!
// 1192KB
// 0ms
#include <stdio.h>

typedef struct
{
	int a;
	int b;
}Connection;

Connection connection[10000];
int check[101] = { 0 };
int count = 0;

void find(int x, int a, int b)
{
	check[1] = 1;
	for (int i = 0; i < b; i++)
	{
		if (connection[i].a == x && check[connection[i].b] == 0)
		{
			check[connection[i].b]++;
			count++;
			find(connection[i].b, a, b);
		}
		else if(connection[i].b == x && check[connection[i].a] == 0)
		{
			check[connection[i].a]++;
			count++;
			find(connection[i].a, a, b);
		}
	}
}

int main()
{
	
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d %d", &connection[i].a, &connection[i].b);
	}
	find(1, a, b);
	printf("%d", count);
}