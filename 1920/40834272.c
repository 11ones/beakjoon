// 2022년 3월 22일 21:25:27
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
	int check = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr2[i] == arr1[j])
            {
				check = 1;
                break;
            }
		}
		if (check == 1)
        {
			printf("1\n");
            check = 0;
        }
        else
			printf("0\n");
	}
}