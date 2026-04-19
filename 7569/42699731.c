// 2022년 5월 1일 15:38:01
// 맞았습니다!!
// 28460KB
// 116ms
#include <stdio.h>

typedef struct
{
	int z;
	int y;
	int x;
}Cabbage;

Cabbage checkcabbage[100 * 100 * 100];
Cabbage sav[100 * 100 * 100];
int cabbage[100][100][100];
int n, m, h;
int k = 0;

int check(int a, int b, int c)
{
	int count = 0;
	int findx[6] = { -1,1,0,0,0,0 };
	int findy[6] = { 0,0,-1,1,0,0 };
	int findz[6] = { 0,0,0,0,-1,1 };
	for (int i = 0; i < 6; i++)
	{
		if (a + findz[i] < 0 || a + findz[i] >= h || b + findy[i] < 0 || b + findy[i] >= n || c + findx[i] < 0 || c + findx[i] >= m)
		{
			continue;
		}
		if (cabbage[a + findz[i]][b + findy[i]][c + findx[i]] == 0)
		{
			count = 1;
			cabbage[a + findz[i]][b + findy[i]][c + findx[i]] = 1;
			sav[k].z = a + findz[i];
			sav[k].y = b + findy[i];
			sav[k++].x = c + findx[i];
		}
	}
	if (count == 0)
		return -1;
	else
		return 1;
}

int main()
{
	scanf("%d %d %d", &m, &n, &h);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				int x;
				scanf("%d", &x);
				cabbage[i][j][l] = x;
			}
		}
	}
	int count = 0;
	int checkcount = 0;
	int checkone = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				if (cabbage[i][j][l] == 1)
				{
					checkcabbage[checkone].z = i;
					checkcabbage[checkone].y = j;
					checkcabbage[checkone++].x = l;
				}
			}
		}
	}
	while (checkone != 0)
	{
		checkcount = 0;

		for (int i = 0; i < checkone; i++)
		{
			int z = checkcabbage[i].z;
			int y = checkcabbage[i].y;
			int x = checkcabbage[i].x;
			if (check(z, y, x) == -1)
				checkcount++;
		}
		count++;
		checkone = 0;
		for (int i = 0; i < k; i++)
		{
			checkcabbage[checkone].z = sav[i].z;
			checkcabbage[checkone].y = sav[i].y;
			checkcabbage[checkone++].x = sav[i].x;
		}
		k = 0;
	}
	int checkzero = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				if (cabbage[i][j][l] == 0)
				{
					checkzero = 1;
					break;
				}
			}
		}
	}
	if (checkzero == 1)
		printf("-1\n");
	else
		printf("%d\n", count - 1);
}