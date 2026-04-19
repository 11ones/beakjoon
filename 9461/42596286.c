// 2022년 4월 29일 01:15:35
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int arr[200];
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	for (int i = 1; i < 100; i++)
		arr[i + 5] = arr[i + 4] + arr[i];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int m;
		scanf("%d", &m);
		printf("%d\n", arr[m]);
	}
}