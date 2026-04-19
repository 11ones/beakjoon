// 2022년 4월 24일 23:39:12
// 맞았습니다!!
// 7248KB
// 24ms
#include <stdio.h>
#include <string.h>

int stack[1000000];
char pm[2000000];

int tops = -1;


void push(int x)
{
	stack[++tops] = x;
}

void pop()
{
	tops--;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int check = 0;
	int i = 0, k = 0, m = 0;
	while(i <= n)
	{
		if (k == n)
		{
			break;
		}
		if (i == n)
		{
			check = 1;
			break;
		}
		for (int j = i; j < arr[k]; j++)
		{
			push(i + 1);
			pm[m++] = '+';
			i++;
		}
		int check_while = 0;
		while(arr[k] == stack[tops] && k < n)
		{
			k++;
			check_while = 1;
			pop();
			pm[m++] = '-';
		}
		if (k == n)
			break;
		if (check_while == 0)
		{
			check = 1;
			break;
		}
	}
	if (check == 1)
		printf("NO");
	else
		for (int j = 0; j < m; j++)
			printf("%c\n", pm[j]);
}