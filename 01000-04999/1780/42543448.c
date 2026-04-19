// 2022년 4월 27일 23:41:09
// 맞았습니다!!
// 19800KB
// 568ms
#include <stdio.h>

int arr[2187][2187];

int findone(int x, int a)
{
	int count = 0;
	while (x >= 1)
	{
		for (int i = 0; i < a; i += x)
		{
			for (int j = 0; j < a; j += x)
			{
				int check = 0;
				for (int k = i; k < i + x; k++)
				{
					for (int l = j; l < j + x; l++)
					{
						if (arr[k][l] == 0 || arr[k][l] == -1)
						{
							check = 1;
							break;
						}
					}
				}
				if (check == 0)
				{
					if (x != 1)
					{
						count -= 9;
					}
					count++;
				}
			}
		}
		x /= 3;
	}
	return count;
}

int findzero(int x, int a)
{
	int count = 0;
	while (x >= 1)
	{
		for (int i = 0; i < a; i += x)
		{
			for (int j = 0; j < a; j += x)
			{
				int check = 0;
				for (int k = i; k < i + x; k++)
				{
					for (int l = j; l < j + x; l++)
					{
						if (arr[k][l] == 1 || arr[k][l] == -1)
						{
							check = 1;
							break;
						}
					}
				}
				if (check == 0)
				{
					if (x != 1)
					{
						count -= 9;
					}
					count++;
				}
			}
		}
		x /= 3;
	}
	return count;
}

int findmone(int x, int a)
{
	int count = 0;
	while (x >= 1)
	{
		for (int i = 0; i < a; i += x)
		{
			for (int j = 0; j < a; j += x)
			{
				int check = 0;
				for (int k = i; k < i + x; k++)
				{
					for (int l = j; l < j + x; l++)
					{
						if (arr[k][l] == 1 || arr[k][l] == 0)
						{
							check = 1;
							break;
						}
					}
				}
				if (check == 0)
				{
					if (x != 1)
					{
						count -= 9;
					}
					count++;
				}
			}
		}
		x /= 3;
	}
	return count;
}

int main()
{

	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("%d\n%d\n%d", findmone(a, a), findzero(a, a), findone(a,a));
}