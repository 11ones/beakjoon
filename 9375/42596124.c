// 2022년 4월 29일 01:10:52
// 출력 초과
// KB
// ms
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[21];
	char type[21];
}Wear;

int c(const void* a, const void* b)
{
	return strcmp(((Wear*)a)->type, ((Wear*)b)->type);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int m;
		scanf("%d", &m);
		
		Wear wear[30];
		for (int j = 0; j < m; j++)
		{
			scanf("%s", wear[j].name);
			scanf("%s", wear[j].type);
		}
		qsort(wear, m, sizeof(wear[0]), c);
		for (int j = 0; j < m; j++)
		{
			printf("%s", wear[j].name);
			printf(" %s\n", wear[j].type);
		}
		int count = 0, countnum = 0;	
		char savword[21];
		int savnum[30];
		strcpy(savword, wear[0].type);
		for (int j = 0; j <= m; j++)
		{
			if (j == m)
			{
				savnum[count++] = countnum + 1;
				break;
			}
			if (strcmp(wear[j].type, savword) == 0)
			{
				countnum++;
			}
			else
			{
				savnum[count++] = countnum + 1;
				countnum = 1;
				strcpy(savword, wear[j].type);
			}
		}
		int sum = 1;
		for (int j = 0; j < count; j++)
		{
			sum *= savnum[j];
		}
		printf("%d\n", sum - 1);
	}
}