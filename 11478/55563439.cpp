// 2023년 2월 9일 21:58:19
// 맞았습니다!!
// 189476KB
// 744ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	int slen = s.size();
	for (int i = 1; i <= slen; i++)
	{
		for (int j = 0; j <= slen - i; j++)
		{
			v.push_back(s.substr(j, i));
		}
	}
	sort(v.begin(), v.end());
	int dif = 1;
	int vlen = v.size();
	for (int i = 1; i < vlen; i++)
	{
		if (v[i].compare(v[i - 1]) != 0) dif++;
	}
	cout << dif;
}