// 2022년 3월 17일 12:48:22
// 시간 초과
// KB
// ms
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr1[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int m;
	int arr2[100000];
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < m; i++)
	{
		int check = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr2[i] == arr1[j])
				check = 1;
		}
		if (check == 1)
			printf("1\n");
		else
			printf("0\n");
	}
}