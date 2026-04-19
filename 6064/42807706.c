// 2022년 5월 3일 21:16:51
// 시간 초과
// KB
// ms
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int p = 0; p < t; p++)
	{
		int m, n, x, y, xx = 0, yy = 0;
		int check = 0;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		for (int i = 1; i <= m * n; i++)
		{
			xx++;
			if (xx > m)
				xx = 1;
			yy++;
			if (yy > n)
				yy = 1;
			if (xx == x && yy == y)
			{
				check = 1;
				printf("%d\n", i);
				break;
			}
		}
		if (check == 0)
			printf("-1\n");
	}
}