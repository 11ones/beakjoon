// 2022년 5월 5일 22:49:37
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int cabbage[100][100];
int count[100][100];
int n, m;
int sav[4];

void check(int a, int b)
{
	cabbage[a][b] = 2;
	int findx[4] = { -1,0,1,0 };
	int findy[4] = { 0,1,0,-1 };;
	for (int i = 0; i < 4; i++)
	{
		if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
			continue;
		if (cabbage[a + findy[i]][b + findx[i]] == 2)
			sav[i] = count[a + findy[i]][b + findx[i]];
	}
	int temp = 0;
	for (int i = 0; i < 4; i++)
	{
		if (sav[i] != 0 && sav[i] > temp)
			temp = sav[i];
	}
	count[a][b] = temp + 1;
	for (int i = 0; i < 4; i++)
	{
		if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
			continue;
		if (cabbage[a + findy[i]][b + findx[i]] == 1)
			check(a + findy[i], b + findx[i]);
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf(" %c", &cabbage[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cabbage[i][j] -= '0';

	count[0][0] = 1;
	check(0, 0);
	printf("%d", count[n - 1][m - 1]);
}