// 2022년 9월 20일 20:32:46
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

char Af[50][50];
int A[50][50];
int Arev[50][50];
int czero = 0, cone = 0;
int czerorev = 0, conerev = 0;

void changeA(int y, int x)
{
	for (int i = y; i < y + 3; i++)
		for (int j = x; j < x + 3; j++)
			if (A[i][j] == 1)
			{
				A[i][j] = 0;
				czero++;
				cone--;
			}
			else
			{
				A[i][j] = 1;
				cone++;
				czero--;
			}
}

void changeArev(int y, int x)
{
	for (int i = y; i < y + 3; i++)
		for (int j = x; j < x + 3; j++)
			if (Arev[i][j] == 0)
			{
				Arev[i][j] = 0;
				czerorev++;
				conerev--;
			}
			else
			{
				Arev[i][j] = 1;
				conerev++;
				czerorev--;
			}
}

int main()
{
	int n, m;
	cin >> n >> m;
	int maxA = 0, maxrev = 0;

	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < m; j++)
		{
			cin >> Af[i][j];
			A[i][j] = Af[i][j] - '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char x;
			cin >> x;
			x -= '0';
			if (A[i][j] == x)
			{
				A[i][j] = 0;
				czero++;
			}
			else
			{
				A[i][j] = 1;
				cone++;
			}
		}
	}
	if (n < 3 || m < 3)
	{
		if (cone == 0 || czero == 0)
			cout << "0";
		else
			cout << "-1";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				Arev[i][j] = A[i][j];
			}
		}
		czerorev = czero;
		conerev = cone;
		//전부 0으로 만들거임	

		for (int i = 0; i < n - 2; i++)
		{
			for (int j = 0; j < m - 2; j++)
			{
				if (A[i][j] == 1)
				{
					changeA(i, j);
					maxA++;
				}
			}
		}
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = 0; j < m - 2; j++)
			{
				if (Arev[i][j] == 0)
				{
					changeArev(i, j);
					maxrev++;
				}
			}
		}

		if ((cone == 0 || czero == 0) || !(conerev == 0 || czerorev == 0))
		{
			cout << maxA;
		}
		else if (!(cone == 0 || czero == 0) || (conerev == 0 || czerorev == 0))
		{
			cout << maxrev;
		}
		else if ((cone == 0 || czero == 0) || (conerev == 0 || czerorev == 0))
		{
			if (maxA < maxrev)
				cout << maxA;
			else
				cout << maxrev;
		}
		else
			cout << "-1";
	}
}