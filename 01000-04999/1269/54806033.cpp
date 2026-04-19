// 2023년 1월 27일 21:39:02
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int A[200000];
int B[200000];

int main()
{
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < y; i++)
	{
		cin >> B[i];
	}

	int mycount = 0;
	int a = 0, b = 0;
	while (a < x && b < y)
	{
		if (A[a] == B[b])
		{
			mycount++;
			b++;
		}
		else if (A[a] < B[b]) a++;
		else if (A[a] > B[b]) b++;
	}
	cout << x + y - mycount * 2;
}