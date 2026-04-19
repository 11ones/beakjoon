// 2022년 4월 10일 14:41:53
// 50점
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int l;
	unsigned long long hash = 0;
	scanf("%d", &l);
	char arr[51];
	scanf("%s", arr);
	for (int i = 0; i < l; i++)
	{
		unsigned long long a = 1;
		for (int j = 0; j < i; j++)
		{
			a *= 31;
		}
		hash = (hash + (arr[i] - 'a' + 1) * a) % 1234567891;
	}
	printf("%llu", hash);
}