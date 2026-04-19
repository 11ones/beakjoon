// 2022년 3월 16일 22:37:19
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
		for (int j = 2; j < k; j++)
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