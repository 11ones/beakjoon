// 2022년 5월 8일 03:13:48
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(void const* a, void const* b)
{
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > *(int*)b)
		return -1;
	else
		return 0;
}

int main()
{
	char arrchar[11];
	int arrint[10];
	scanf("%s", arrchar);
	int len = strlen(arrchar);
	for (int i = 0; i < len; i++)
	{
		arrint[i] = arrchar[i] - '0';
	}
	qsort(arrint, len, 4, compare);
	for (int i = 0; i < len; i++)
	{
		printf("%d",arrint[i]);
	}
}