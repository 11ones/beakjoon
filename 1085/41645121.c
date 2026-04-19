// 2022년 4월 7일 17:04:40
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int l = x;
	int r = w - x;
	int d = y;
	int u = h - y;
	if (l > r)
		l = r;
	if (l > d)
		l = d;
	if (l > u)
		l = u;
	printf("%d", l);
}