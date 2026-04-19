// 2022년 4월 7일 14:43:43
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>

int main()
{
	char arr[50][50];
	char chessW[8][8] =
	{
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}
	};
	char chessB[8][8] =
	{
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}
	};

	int n, m;
	scanf("%d %d", &n, &m);
	int min = 32;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf(" %c", &arr[i][j]);


	for (int i = 0; i < n - 7; i++)
		for (int j = 0; j < m - 7; j++)
		{
			int checkW = 0, checkB=0;
				for (int k = 0; k < 8; k++)
					for (int l = 0; l < 8; l++)
						if (arr[k + i][l + j] != chessW[k][l])
							checkW++;
				for (int k = 0; k < 8; k++)
					for (int l = 0; l < 8; l++)
						if (arr[k + i][l + j] != chessB[k][l])
							checkB++;
			if (min > checkW)
				min = checkW;
			if (min > checkB)
				min = checkB;
		}
	printf("%d", min);
}