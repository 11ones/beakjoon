// 2022년 5월 19일 00:01:54
// 맞았습니다!!
// 3688KB
// 28ms
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct
{
	unsigned int a;
	unsigned int b;
}Connect;

vector <Connect> connect;

bool compareConnect(Connect x, Connect y)
{
	if (x.b == y.b)
		return x.a < y.a;
	return x.b < y.b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i{ 0 }; i < n; i++)
	{
		unsigned int a, b;
		cin >> a >> b;
		connect.push_back({ a,b });
	}

	int answer{ 0 };

	sort(connect.begin(), connect.end(), compareConnect);
	int front{ 0 };
	for (Connect elem : connect)
	{
		if (front<=elem.a)
		{
			front = elem.b;
			answer++;
		}
	}

	cout << answer;
}