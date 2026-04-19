// 2022년 3월 16일 16:26:54
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int n, max = 0, place, arr[9];
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			place = i + 1;
		}
	}
	printf("%d\n%d", max, place);
}