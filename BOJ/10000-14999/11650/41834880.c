// 2022년 4월 11일 21:47:23
// 맞았습니다!!
// 2552KB
// 72ms
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int x;
	int y;
}Size;

int compare(const void* a, const void* b)
{
	if (((Size*)a)->x < ((Size*)b)->x)
		return -1;
	else if (((Size*)a)->x > ((Size*)b)->x)
		return 1;
	else
		if (((Size*)a)->y < ((Size*)b)->y)
			return -1;
		else if (((Size*)a)->y > ((Size*)b)->y)
			return 1;
		else
			return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	Size size[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &size[i].x);
		scanf("%d", &size[i].y);
	}

	qsort(size, n, sizeof(size[0]), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", size[i].x);
		printf("%d\n", size[i].y);
	}
}