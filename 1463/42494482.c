// 2022년 4월 26일 23:18:42
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int count = 0;

int find(int x)
{
	if (x == 1)
		return count;
	count++;
	if (x % 3 == 0)
		return find(x / 3);
	else if ((x - 1) % 3 == 0)
		return find(x - 1);
	else if (x % 2 == 0)
		return find(x / 2);
	else
		return find(x - 1);
}

int main()
{
	int x;
	scanf("%d", &x);
    printf("%d",find(x));
}