// 2022년 4월 7일 21:45:29
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int static compare(const void* first, const void* second)
{
	if (strlen((char*)first) == strlen((char*)second))
		return (char*)first > (char*)second;
	else
		return (strlen((char*)first) > strlen((char*)second));


}

int main()
{
	int n;
	char arr[200][51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf(" %s", arr[i]);

	qsort(arr, n, sizeof(arr[0]), compare);

	printf("\n");
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(arr[i], arr[j]) != 0 || i == j)
		{
			printf("%s\n", arr[i]);
		}
		j = i;
	}
}