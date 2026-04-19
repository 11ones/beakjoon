// 2022년 8월 29일 14:37:57
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int time = 0;

	string alp;
	cin >> alp;

	for (char elem : alp)
	{
		if (elem < 'S')
			time += (elem - 'A') / 3 + 3;
		else if (elem == 'S')
			time += 8;
		else if (elem == 'Z')
			time += 10;
		else
			time += (elem - 'A' - 1) / 3 + 3;
	}

	cout << time;
}