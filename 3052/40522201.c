// 2022년 3월 16일 17:24:06
// 틀렸습니다
// KB
// ms
#include <stdio.h>

int main()
{
	int count[10], arr[10], answer = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 10; i++)
		arr[i] %= 42;
	for (int i = 0; i < 10; i++)
	{
		count[i] = 0;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
				count[i]++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (count[i] == 1)
			answer++;
		else
			for (int j = 0; j < 10; j++)
			{
				if (j == i)
					break;
				if (count[i] == count[j] && arr[i] != arr[j])
                {
					answer++;
                    break;
                }
			}
	}
	printf("%d", answer);
}