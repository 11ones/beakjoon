// 2022년 4월 10일 13:44:14
// 틀렸습니다
// KB
// ms
#include<stdio.h>
#include<math.h>

int main()
{
	int l;
	unsigned long long hash = 0;
	scanf("%d", &l);
	char arr[51];
	scanf("%s", arr);
	for (int i = 0; i < l; i++)
	{
		hash += (arr[i] - 'a' - 1) * pow(31, i);
		hash %= 1234567891;
	}
	printf("%llu", hash);
}