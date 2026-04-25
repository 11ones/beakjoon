// 2022년 3월 16일 17:38:45
// 컴파일 에러
// KB
// ms
#include <stdio.h>

int main()
{
	int count[10], arr[10], answer = 0;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	for (int i = 1; i < 42; i++)
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