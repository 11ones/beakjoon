// 2022년 5월 2일 00:37:10
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int one;
	int six;
}Brand;

int cone(const void* a, const void* b)
{
	if (((Brand*)a)->one < ((Brand*)b)->one)
		return -1;
	else if (((Brand*)a)->one > ((Brand*)b)->one)
		return 1;
	else
		return 0;
}

int csix(const void* a, const void* b)
{
	if (((Brand*)a)->six < ((Brand*)b)->six)
		return -1;
	else if (((Brand*)a)->six > ((Brand*)b)->six)
		return 1;
	else
		return 0;
}

int main()
{
	int m, n;
	Brand brand[50];
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &brand[i].six, &brand[i].one);
	}
	qsort(brand, n, sizeof(brand[0]), cone);
	int minone = brand[0].one;
	qsort(brand, n, sizeof(brand[0]), csix);
	int minsix = brand[0].six;
	int min = m * minone;
	if (min > m / 6 * minsix + m % 6 * minone)
		min = m / 6 * minsix + m % 6 * minone;
	if (min > (m / 6 + 1) * minsix)
		min = (m / 6 + 1) * minsix;
	printf("%d", min);
}