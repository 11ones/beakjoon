// 2022년 3월 16일 17:42:41
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int main()
{
	int arr[10], answer = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 42; i++)
	{
		for(int j=0;j<10;j++)
			if (arr[j] % 42 == i)
			{
				answer++;
				break;
			}
	}

	printf("%d", answer);
}