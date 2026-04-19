// 2023년 3월 27일 17:00:39
// 맞았습니다!!
// 2020KB
// 8ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int xmax = -10'001, ymax = -10'001, xmin = 10'001, ymin = 10'001;
	for (int t = 0; t < n; t++)
	{
		int a, b;
		cin >> a >> b;
		if (xmax < a) xmax = a;
		if (xmin > a) xmin = a;
		if (ymax < b) ymax = b;
		if (ymin > b) ymin = b;
	}
	cout << (xmax - xmin) * (ymax - ymin);
}