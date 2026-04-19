// 2022년 4월 28일 21:51:31
// 맞았습니다!!
// 16744KB
// 672ms
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
	int b;
}Point;

Point point[1000000];

int static compareA(const void* a, const void* b)
{
	if (((Point*)a)->a < ((Point*)b)->a)
		return -1;
	else if (((Point*)a)->a > ((Point*)b)->a)
		return 1;
	else
		return 0;
}

int static compareB(const void* a, const void* b)
{
	if (((Point*)a)->b < ((Point*)b)->b)
		return -1;
	else if (((Point*)a)->b > ((Point*)b)->b)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &point[i].a);
		point[i].b = i;
	}
	qsort(point, n, sizeof(point[0]), compareA);
	int x = 0, sav1 = point[0].a;
	for (int i = 0; i < n; i++)
	{
		int sav2 = point[i].a;
		if (sav1 != sav2)
		{
			sav1 = sav2;
			point[i].a = ++x;
		}
		else
		{
			point[i].a = x;
		}
	}
	qsort(point, n, sizeof(point[0]), compareB);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", point[i].a);
	}
}