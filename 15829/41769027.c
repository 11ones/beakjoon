// 2022년 4월 10일 13:46:46
// 50점
// 1300KB
// 0ms
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
		hash += (arr[i] - 'a' + 1) * pow(31, i);
	}
	printf("%llu", hash);
}