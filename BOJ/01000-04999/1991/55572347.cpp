// 2023년 2월 10일 00:13:51
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

vector <array<char,3>> v;
string pre, in, post;

void order(char c)
{
	pre += c;
	if (v[c - 'A'][1] > 46)
	{
		order(v[c - 'A'][1]);
	}
	in += c;
	if (v[c - 'A'][2] > 46)
	{
		order(v[c - 'A'][2]);
	}
	post += c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	array<char, 3> tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> tmp[j];
		}
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	order('A');
	cout << pre << '\n' << in << '\n' << post;
}