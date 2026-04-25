// 2022년 3월 16일 16:51:37
// 틀렸습니다
// KB
// ms
#include <stdio.h>


int main()
{
	int a, b, c, sav, arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	scanf("%d %d %d", &a, &b, &c);
	int k = a * b * c;

	for (int i = 0; i < 9; i++)
	{
		int a = 1;
		for (int j = 0; j < i; j++)
			a *= 10;
		if (k / a == 0)
			break;
		sav = k / a % 10;
		arr[sav]++;
	}
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
}