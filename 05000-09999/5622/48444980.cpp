// 2022년 8월 29일 14:34:47
// 틀렸습니다
// KB
// ms
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
		if (elem == 'Z')
			time += 9;
		else
			time += (elem - 'A') / 3 + 3;
	}

	cout << time;
}