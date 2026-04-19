// 2022년 4월 11일 21:06:15
// 맞았습니다!!
// 100996KB
// 148ms
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int age;
	char name[1000];
	int number;
}Size;

int compare(const void* a, const void* b)
{
	if (((Size*)a)->age < ((Size*)b)->age)
		return -1;
	else if (((Size*)a)->age > ((Size*)b)->age)
		return 1;
	else
		if (((Size*)a)->number < ((Size*)b)->number)
			return -1;
		else if (((Size*)a)->number > ((Size*)b)->number)
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
		scanf("%d", &size[i].age);
		scanf("%s", &size[i].name);
		size[i].number = i;
	}
	
	qsort(size, n, sizeof(size[0]), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", size[i].age);
		printf("%s\n", size[i].name);
	}
}