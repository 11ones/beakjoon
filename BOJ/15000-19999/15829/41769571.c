// 2022년 4월 10일 14:03:53
// 50점
// 1116KB
// 0ms
#include<stdio.h>
#include<math.h>

int main()
{
	int l;
	unsigned long long hash = 0, m = 1234567891;
	scanf("%d", &l);
	char arr[51];
	unsigned long long over[10] = {0};
	scanf("%s", arr);
	for (int i = 0; i < l; i++)
	{
		unsigned long long a = 1;
		for (int j = 0; j < i; j++)
		{
			a *= 31;
		}
		hash += (arr[i] - 'a' + 1) * a;
		if (hash / m != 0)
			over[0] = hash/m;
		for (int j = 0; j < 9; j++)
			if (over[i] / m != 0)
				over[i + 1] = over[i] / m;
	}
	int i = 0;
	for (; i < 10; i++)
	{
		if (over[i] == 0)
			break;
	}
	
	for (int j=0; j < i; j++)
		printf("%llu", over[i - j - 1]);
	printf("%llu", hash);
}