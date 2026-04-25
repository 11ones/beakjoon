// 2022년 5월 6일 22:39:18
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int l, p, v;
	scanf("%d %d %d", &l, &p, &v);
	int i = 0;
	while (l != 0 && p != 0 && v != 0)
	{
		int x = v / p * l;
		if (v % p >= l)
			x += l;
		else
			x += v % p;
		printf("Case %d: ", ++i);
		printf("%d\n", x);
		scanf("%d %d %d", &l, &p, &v);
	}
}