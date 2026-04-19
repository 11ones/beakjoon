// 2022년 3월 14일 16:33:11
// 컴파일 에러
// KB
// ms
#include <stdio.h>
#include <string.h>

int main()
{
	int amount, buffer;
	scanf_s("%d", &amount);
	char* dir[50];
	for (int i = 0; i < amount; i++)
	{
		scanf_s("%d", &buffer);
		gets_s(dir[i],sizeof(dir[i]));
	}
	for (int i = 0; i < amount; i++)
	{
		printf("%s", dir[i]);
	}
}