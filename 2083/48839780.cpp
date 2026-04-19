// 2022년 9월 6일 23:29:54
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	string name;
	int age, kg;
	cin >> name >> age >> kg;
	while (name != "#" || age != 0 || kg != 0)
	{
		if (age > 17 || kg >= 80)
			cout << name << " Senior\n";
		else
			cout << name << " Junior\n";
		cin >> name >> age >> kg;
	}
}