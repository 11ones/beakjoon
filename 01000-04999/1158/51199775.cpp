// 2022년 11월 1일 20:05:23
// 맞았습니다!!
// 1780KB
// 228ms
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int arr[100000];
	int answer[100000];
	for (int i = 0; i < a; i++)
	{
		arr[i] = i + 1;
	}
	int j = -1;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			j++;
			if (j == a)
				j = 0;
			while (arr[j] == 0)
			{
				j++;
				if (j == a)
					j = 0;
			}
		}
		answer[i] = arr[j];
		arr[j] = 0;

	}
	printf("<");
	for (int i = 0; i < a - 1; i++)
	{
		printf("%d, ", answer[i]);
	}
	printf("%d", answer[a - 1]);
	printf(">");
}