// 2022년 4월 27일 17:09:50
// 틀렸습니다
// KB
// ms
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
	for (int i = 0; i < b; i++)
	{
		if (connection[i].a == x && check[connection[i].b] == 0)
		{
			check[connection[i].b]++;
			count++;
			find(connection[i].b, a, b);
		}
	}
}

int main()
{
	
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++)
	{
		int cona, conb;
		scanf("%d %d", &cona, &conb);
		if (cona > conb)
		{
			int sav = cona;
			cona = conb;
			conb = sav;
		}
		connection[i].a = cona;
		connection[i].b = conb;
	}
	find(1, a, b);
	printf("%d", count);
}