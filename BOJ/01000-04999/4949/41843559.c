// 2022년 4월 12일 00:50:28
// 컴파일 에러
// KB
// ms
int main()
{
	char arr[2001];
	int i = 0;
	while (1)
	{
		gets_s(arr);
		if (arr[strlen(arr)] = EOF)
			break;
		int check = 0;
		int lil = 0;
		int big = 0;
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == '(')
				lil++;
			if (arr[j] == ')')
				lil--;
			if (arr[j] == '[')
				big++;
			if (arr[j] == ']')
				big--;
			if (lil < 0 || big < 0)
				break;
			if (arr[j] == '.')
				break;
		}
		if (lil == 0 && big == 0)
			printf("yes\n");
		else
			printf("no\n");
		i++;
	}
}