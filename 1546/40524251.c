// 2022년 3월 16일 17:54:01
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	float sum = 0, arr[1000];
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