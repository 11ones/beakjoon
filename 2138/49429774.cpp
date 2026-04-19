// 2022년 9월 20일 21:22:53
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

bool B[100000];

void change(int x, bool A[])
{
	for (int i = x; i < x + 3; i++)
		A[i] = !A[i];
}

int diff(bool A[], int n)
{
	int cdiff = 0;
	for (int i = 0; i < n; i++)
			if (A[i] != B[i])
				cdiff++;
	return cdiff;
}

int main()
{
	int n;
	cin >> n;
	char x;
	int c = 0, c2 = 1;
	bool A[100000];
	bool A2[100000];

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		A[i] = x - '0';
		A2[i] = A[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		B[i] = x - '0';
	}

	for (int i = 0; i < n - 2; i++)
	{
		if (A[i] != B[i] || A[i + 1] != B[i + 1])
		{
			change(i, A);
			c++;
		}
	}
	if (A[n - 2] != B[n - 2])
	{
		A[n - 2] = !A[n - 2];
		A[n - 1] = !A[n - 1];
	}
	A2[0] = !A2[0];
	A2[1] = !A2[1];
	for (int i = 0; i < n - 2; i++)
	{
		if (A2[i] != B[i] || A2[i + 1] != B[i + 1])
		{
			change(i, A2);
			c2++;
		}
	}
	if (A2[n - 2] != B[n - 2])
	{
		A2[n - 2] = !A2[n - 2];
		A2[n - 1] = !A2[n - 1];
		c2++;
	}
	int dA = diff(A, n), dB = diff(A2, n);
	if (dA == 0 && dB == 0)
	{
		if (c > c2)
			cout << c2;
		else
			cout << c;
	}
	else if (dA == 0)
	{
		cout << c;
	}
	else if (dB == 0)
	{
		cout << c2;
	}
	else
		cout << "-1";
}