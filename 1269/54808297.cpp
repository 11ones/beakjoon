// 2023년 1월 27일 22:22:34
// 맞았습니다!!
// 3584KB
// 232ms
#include <iostream>
#include <algorithm>
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
	sort(A, &A[x]);
	sort(B, &B[y]);

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