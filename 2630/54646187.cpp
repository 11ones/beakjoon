// 2023년 1월 25일 09:40:34
// 맞았습니다!!
// 1180KB
// 0ms
#include <stdio.h>

int arr[128][128];

int findb(int x, int a)
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
						if (arr[k][l] == 0)
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
						count -= 4;
					}
					count++;
				}
			}
		}
		x /= 2;
	}
	return count;
}
int findw(int x, int a)
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
						if (arr[k][l] == 1)
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
						count -= 4;
					}
					count++;
				}
			}
		}
		x /= 2;
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
	printf("%d\n%d", findw(a, a), findb(a, a));
}