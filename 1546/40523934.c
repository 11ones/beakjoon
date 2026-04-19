// 2022년 3월 16일 17:49:02
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n, arr[1000];
	float sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	for (int i = 0; i < n; i++)
		arr[i] = arr[i] / max * 100;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	printf("%d", sum/n);
}