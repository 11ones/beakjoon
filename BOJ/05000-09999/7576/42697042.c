// 2022년 5월 1일 14:29:45
// 시간 초과
// KB
// ms
int visit[1000][1000];
int cabbage[1000][1000];
int n, m;

int check(int a, int b)
{
	int count = 0;
	int findx[4] = { -1,0,1,0 };
	int findy[4] = { 0,1,0,-1 };
	int i = 0;
	if (cabbage[a][b] == 1 && visit[a][b] != 1) 
	{
		for (; i < 4; i++)
		{
			if (a + findy[i] < 0 || a + findy[i] >= n || b + findx[i] < 0 || b + findx[i] >= m)
			{
				continue;
			}
			if (cabbage[a + findy[i]][b + findx[i]] == 0)
			{
				count = 1;
				cabbage[a + findy[i]][b + findx[i]] = 1;
				visit[a + findy[i]][b + findx[i]] = 1;
			}
			
		}
	}
	visit[a][b] = 1;
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
			visit[i][j] = 0;
		}
	}
	int count = 0;
	int checkcount = 0;
	while (checkcount > -m * n)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				visit[i][j] = 0;
		checkcount = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int x;
				x = check(i, j);
				if (x == -1)
					checkcount--;
			}
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