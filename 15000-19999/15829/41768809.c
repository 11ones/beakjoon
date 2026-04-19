// 2022년 4월 10일 13:40:48
// 틀렸습니다
// KB
// ms
#include<stdio.h>
#include<math.h>

int main()
{
	int l;
	unsigned long long hash;
	scanf("%d", &l);
	char arr[51];
	for (int i = 0; i < l; i++)
	{
		hash += arr[i] * pow(31, i + 1);
		hash %= 1234567891;
	}
	printf("%llu", hash);
}