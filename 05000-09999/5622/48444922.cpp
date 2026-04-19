// 2022년 8월 29일 14:33:45
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
		time += (elem - 'A') / 3 + 3;
	}

	cout << time;
}