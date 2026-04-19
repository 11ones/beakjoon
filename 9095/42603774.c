// 2022년 4월 29일 10:44:02
// 맞았습니다!!
// 1112KB
// 0ms
#include <stdio.h>

int arr[15] = { 0,1,2,4 };

int main()
{
	for (int i = 1; i < 11; i++)
	{
		arr[i + 3] = arr[i + 2] + arr[i + 1] + arr[i];
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int m;
		scanf("%d", &m);
		printf("%d\n", arr[m]);
	}
}