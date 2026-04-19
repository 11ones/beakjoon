// 2022년 3월 24일 16:16:06
// 맞았습니다!!
// 1380KB
// 16ms
#include <stdio.h>
int main()
{
	int k, j = 0;
	scanf("%d", &k);
	int arr[100000];
	for (int i = 0; i < k; i++)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			j--;
		else
			arr[j++] = n;
	}
	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += arr[i];
	}
	printf("%d", sum);
}