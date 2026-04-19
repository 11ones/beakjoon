// 2022년 5월 5일 23:21:08
// 시간 초과
// KB
// ms
#include <stdio.h>

int cabbage[100][100];
int countarr[100][100];
int n, m;

void check(int a, int b, int count)
{
	cabbage[a][b] = 0;
	countarr[a][b] = count;
	int findx[4] = { -1,1,0,0 };
	int findy[4] = { 0,0,-1,1 };
	for (int i = 0; i < 4; i++)
	{
		if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
			continue;
		if ((cabbage[a + findy[i]][b + findx[i]] == 1 && countarr[a + findy[i]][b + findx[i]] == 0) || countarr[a + findy[i]][b + findx[i]] > count)
		{
			check(a + findy[i], b + findx[i], count + 1);
		}
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
	check(0, 0, 1);
	printf("%d", countarr[n - 1][m - 1]);
}