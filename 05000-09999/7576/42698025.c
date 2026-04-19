// 2022년 5월 1일 14:56:31
// 컴파일 에러
// KB
// ms
#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Cabbage;

Cabbage checkcabbage[1000 * 1000];
int cabbage[1000][1000];
int n, m;

int check(int a, int b)
{
	int count = 0;
	int findx[4] = { -1,0,1,0 };
	int findy[4] = { 0,1,0,-1 };
	for (int i = 0; i < 4; i++)
	{
		if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
		{
			continue;
		}
		if (cabbage[a + findy[i]][b + findx[i]] == 0)
		{
			count = 1;
			cabbage[a + findy[i]][b + findx[i]] = 1;
		}
	}
	if (count == 0)
		return -1;
	else
		return 1;
}

int main()
{
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int x;
			scanf("%d", &x);
			cabbage[i][j] = x;
		}
	}
	int count = 0;
	int checkcount = 0;
	int checkone = 1;
	while (checkcount != checkone)
	{
		checkcount = 0;
		checkone = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (cabbage[i][j] == 1)
				{
					checkcabbage[checkone] = { i,j };
					checkone++;
				}
			}
		}
		for (int i = 0; i < checkone; i++)
		{
			int x = checkcabbage[i].x;
			int y = checkcabbage[i].y;
			if (check(x, y) == -1)
				checkcount++;
		}
		count++;
	}
	int checkzero = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (cabbage[i][j] == 0)
				checkzero = 1;
		}
	}
	if (checkzero == 1)
		printf("-1\n");
	else
		printf("%d\n", count - 1);
}