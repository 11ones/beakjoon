// 2022년 5월 9일 22:24:21
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	int first = 0;
	for (int i = a; i <= b; i++)
	{
		int check = 0;
		for (int j = 2; j < i; j++)
			if (i % j == 0)
				check = 1;
		if (check == 0)
		{
			sum += i;
			if (first == 0)
				first = i;
		}
	}
	if (first == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, first);
}