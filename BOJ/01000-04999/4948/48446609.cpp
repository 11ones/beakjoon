// 2022년 8월 29일 15:07:23
// 맞았습니다!!
// 2152KB
// 708ms
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vec;
	vec.push_back(2);
	for (int i = 3; i < 250000; i++)
	{
		bool check = 0;
		for (int elem : vec)
		{
			if (i % elem == 0)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			vec.push_back(i);
	}

	int x;
	cin >> x;
	while (x != 0)
	{
		int counts = 0;
		for (int elem : vec)
		{
			if (elem > 2 * x)
				break;
			else if (elem > x)
				counts++;
		}
		cout << counts << "\n";
		cin >> x;
	}
}