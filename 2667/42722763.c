// 2022년 5월 2일 00:22:08
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <stdlib.h>

int cabbage[50][50];
char house[50][50];
int sav[2500];
int m = 0;
int x;
int count = 0;
int check(int a, int b)
{
	if (cabbage[a][b] == 1)
	{
		cabbage[a][b] = 0;
		int findx[4] = { -1,1,0,0 };
		int findy[4] = { 0,0,-1,1 };
		for (int i = 0; i < 4; i++)
		{
			if (a + findy[i] < 0 || a + findy[i] >= x || b + findx[i] < 0 || b + findx[i] >= x)
			{
				continue;
			}
			if (cabbage[a + findy[i]][b + findx[i]] == 1)
			{
				count++;
				check(a + findy[i], b + findx[i]);
				cabbage[a + findy[i]][b + findx[i]] = 0;
			}
		}
	}
	return count;
}

int c(const void* a, const void* b)
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
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			scanf(" %c", &house[i][j]);
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cabbage[i][j] = house[i][j] - '0';
		}
	}
	int countcheck = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			count = 0;
			countcheck = check(i, j);
			if (countcheck != 0)
				sav[m++] = countcheck + 1;
		}
	}
	qsort(sav, m, 4, c);
	printf("%d\n", m);
	for (int i = 0; i < m; i++)
	{
		printf("%d\n", sav[i]);
	}
}