// 2022년 4월 10일 14:46:18
// 50점
// 1112KB
// 0ms
#include<stdio.h>

int main()
{
	int l;
	unsigned long long hash = 0, a = 1;
	scanf("%d", &l);
	char arr[51];
	scanf("%s", arr);
	for (int i = 0; i < l; i++)
	{
		hash = hash + (arr[i] - 'a' + 1) * a % 1234567891;
		a = a * 31 % 1234567891;
	}
	printf("%llu", hash);
}