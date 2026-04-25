// 2022년 4월 12일 19:49:19
// 컴파일 에러
// KB
// ms
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	for (int i = 0;; i++)
	{
		gets_s(arr);
		if (arr[0] == '.')
			break;
		int check = 0;
		int lil = 0;
		int big = 0;
		for (int j = 0;; j++)
		{
			if (arr[j] == '(')
			{
				int check2 = 1;
				int check1 = 0;
				for (int k = j + 1;; k++)
				{
					if (arr[k] == '(')
					{
						check2++;
					}
					if (arr[k] == ')')
					{
						check2--;
					}
					if (arr[k] == '[')
					{
						check1++;
					}
					if (arr[k] == ']')
					{
						check1--;
					}
					if (check2 == 0 || check1 < 0)
						break;
					if (arr[k] == '.')
						break;
				}
				if (check2 != 0)
				{
					check = 1;
				}
				lil++;
			}
			if (arr[j] == ')')
			{
				lil--;
			}
			if (arr[j] == '[')
			{
				int check1 = 1;
				int check2 = 0;
				for (int k = j + 1;; k++)
				{
					if (arr[k] == '(')
					{
						check2++;
					}
					if (arr[k] == ')')
					{
						check2--;
					}
					if (arr[k] == '[')
					{
						check1++;
					}
					if (arr[k] == ']')
					{
						check1--;
					}
					if (check1 == 0 || check2 < 0)
						break;
					if (arr[k] == '.')
						break;
				}
				if (check1 != 0)
				{
					check = 1;
				}
				big++;
			}
			if (arr[j] == ']')
			{
				big--;
			}
			if (lil < 0 || big < 0)
				break;
			if (arr[j] == '.')
				break;
		}
		if (lil == 0 && big == 0 && check == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
}