// 2022년 4월 13일 12:21:14
// 맞았습니다!!
// 1128KB
// 188ms
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <= 2)
    {
		printf("2 ");
        a = 3;
    }
	if (a % 2 == 0)
		a++;
	for (int i = a; i <= b; i += 2)
	{
		int x = ceil(sqrt(i));
		int check = 0;
		for (int j = 2; j <= x; j++)
		{
			if (i % j == 0)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			printf("%d\n", i);
	}
}