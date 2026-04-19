// 2022년 3월 16일 22:22:08
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int a, check2 = 0;
	scanf("%d", &a);
	for (int i = 1; i < a + 1; i++)
	{
		int k;
		scanf("%d", &k);
		int check = 0;
		for (int j = k + 1; j < 1000; j++)
		{
			if (k % j == 0 || k != 1)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			check2++;
		}
	}
	printf("%d", check2);
}