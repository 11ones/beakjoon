// 2023년 1월 27일 21:32:32
// 맞았습니다!!
// 21660KB
// 320ms
#include <iostream>
#include <algorithm>
using namespace std;

string A[10000];
string B[10000];

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
	cout << mycount;
}