// 2022년 4월 11일 20:39:08
// 맞았습니다!!
// 1112KB
// 0ms
#include<stdio.h>

typedef struct
{
	int weight;
	int height;
}Size;

int main()
{
	int n;
	scanf("%d", &n);
	Size size[50];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &size[i].weight);
		scanf("%d", &size[i].height);
	}

	int answer[50];
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = 0; j < n; j++)
			if (size[i].weight < size[j].weight && size[i].height < size[j].height && j != i)
				count++;
		answer[i] = count;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", answer[i]);
}