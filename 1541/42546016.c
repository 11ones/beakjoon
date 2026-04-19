// 2022년 4월 28일 00:31:03
// 맞았습니다!!
// 1116KB
// 0ms
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[51];
	int num[25];
	char pm[25];
	scanf("%s", arr);
	char numsav[10] = { 0 };
	int m = 0, n = 0;
	for (int i = 0; i <= strlen(arr); i++)
	{
		if (i == strlen(arr))
		{
			int a = 1;
			int number = 0;
			for (int j = 1; j <= m; j++)
			{
				number += (numsav[m - j] - '0') * a;
				a *= 10;
			}
			num[n++] = number;
			for (int j = 0; j < 5; j++)
				numsav[j] = 0;
			m = 0;
		}
		else if (arr[i] == '-')
		{
			int a = 1;
			int number = 0;
			for (int j = 1; j <= m; j++)
			{
				number += (numsav[m - j] - '0') * a;
				a *= 10;
			}
			num[n] = number;
			pm[n++] = '-';
			for (int j = 0; j < 5; j++)
				numsav[j] = 0;
			m = 0;
		}
		else if (arr[i] == '+')
		{
			int a = 1;
			int number = 0;
			for (int j = 1; j <= m; j++)
			{
				number += (numsav[m - j] - '0') * a;
				a *= 10;
			}
			num[n] = number;
			pm[n++] = '+';
			for (int j = 0; j < 5; j++)
				numsav[j] = 0;
			m = 0;
		}
		else
			numsav[m++] = arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += num[i];
		if (pm[i] == '-')
		{
			for (int j = i + 1; j < n; j++)
			{
				sum += -num[j];
			}
			break;
		}
	}
	printf("%d", sum);
}