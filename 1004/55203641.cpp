// 2023년 2월 3일 18:19:56
// 맞았습니다!!
// 2020KB
// 12ms
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int o = 0; o < t; o++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int mycount = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int cx, cy, r;
			cin >> cx >> cy >> r;
			bool in1 = r * r > (cx - x1) * (cx - x1)
				+ (cy - y1) * (cy - y1);
			bool in2 = r * r > (cx - x2) * (cx - x2)
				+ (cy - y2) * (cy - y2);
			if (in1 && !in2 || !in1 && in2) mycount++;
		}
		cout << mycount << '\n';
	}
}