// 2022년 3월 16일 22:16:33
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i < a; i++)
	{
		int check = 0;
		for (int j = i + 1; j < a; j++)
		{
			if (i % j == 0)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			printf("%d\n", i);
		}
	}
}