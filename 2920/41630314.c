// 2022년 4월 7일 12:16:12
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>

int main()
{
	int arr[8];
	int ascending[] = { 1,2,3,4,5,6,7,8 };
	int descending[] = { 8,7,6,5,4,3,2,1 };
	short asc = 1, des = 1;
	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] != descending[i])
		{
			des = 0;
		}
		if (arr[i] != ascending[i])
		{
			asc = 0;
		}
	}
	if (des == 1)
	{
		printf("descending");
	}
	else if (asc == 1)
	{
		printf("ascending");
	}
	else
		printf("mixed");

}