// 2022년 4월 11일 22:47:18
// 메모리 초과
// KB
// ms
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[100000000];
	for (int i = 1; i <= n; i++)
		arr[i - 1] = i;
	int k = n;
	int i = 0;
	while (1)
	{
		arr[i] = 0;
		i++;
		if (i == k - 1)
			break;
		arr[k] = arr[i];
		i++;
		k++;
		if (i == k - 1)
			break;
	}
	printf("%d", arr[i]);
}