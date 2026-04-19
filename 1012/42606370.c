// 2022년 4월 29일 12:04:42
// 맞았습니다!!
// 1196KB
// 0ms
#include <stdio.h>

int cabbage[50][50];
int n, m;

int check(int a, int b)
{
	int count = 0;
	if (cabbage[a][b] == 1)
	{
		cabbage[a][b] = 0;
		count = 1;
		int findx[4] = { -1,0,1,0 };
		int findy[4] = { 0,1,0,-1 };;
		for (int i = 0; i < 4; i++)
		{
			if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
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

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		n = 0, m = 0;
		int num;
		scanf("%d %d %d", &n, &m, &num);
		for (int i = 0; i < num; i++)
		{
			int np, mp;
			scanf("%d %d", &np, &mp);
			cabbage[np][mp]++;
		}
		int count = 0, countcheck;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				countcheck = check(j, k);
				if (countcheck != 0)
					count++;
			}
		}
		printf("%d\n", count);
	}
}