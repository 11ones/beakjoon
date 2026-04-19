// 2022년 3월 16일 16:26:31
// 틀렸습니다
// KB
// ms
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
			place = i;
		}
	}
	printf("%d\n%d", max, place);
}