// 2023년 2월 25일 23:12:41
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double score = 0;
	int credit = 0;

	for (int i = 0; i < 20; i++)
	{
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		if (s3[0] == 'P') continue;
		double c = (int)s2[0] - '0', g = 'E' - (int)s3[0];
		credit+=c;
		if (s3[0] == 'F') continue;
		if (s3[1] == '+') g += 0.5;
		score += c * g;
	}
	cout << score / credit;
}