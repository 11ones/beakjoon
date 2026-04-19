// 2022년 3월 24일 16:05:04
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100][6];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		int a = pow(abs(arr[i][0] - arr[i][3]), 2) + pow(abs(arr[i][1] - arr[i][4]), 2);
		
		int r1 = arr[i][2];
		int r2 = arr[i][5];


		if (a > pow(r1 + r2, 2) || a < pow(abs(r2 - r1), 2))
			printf("0\n");
		else if (a == pow(r1 + r2, 2) || (a == pow(abs(r2 - r1), 2) && a != 0))
			printf("1\n");
		else if (pow(abs(r2 - r1), 2) < a && a < pow(r1 + r2, 2))
			printf("2\n");
		else
			printf("-1\n");
	}
	return 0;
}