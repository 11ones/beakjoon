// 2022년 5월 10일 22:21:41
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int count = 0, i = 0, j = 0, k = 0;
	while (i != a || j != b || k != c)
	{
		i++, j++, k++;
		if (i == 16)
			i = 1;
		if (j == 29)
			j = 1;
		if (k == 20)
			k = 1;
		count++;
	}
	printf("%d", count);
}