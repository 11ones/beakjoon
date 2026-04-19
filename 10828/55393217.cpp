// 2023년 2월 7일 12:23:43
// 런타임 에러 (Segfault)
// KB
// ms
#include <iostream>
#include <stack>
using namespace std;

stack <int> stk;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		int x;
		cin >> s;
		if (s.compare("push") == 0)
		{
			cin >> x;
			stk.push(x);
		}
		else if (s.compare("pop") == 0)
		{
			cout << stk.top() << '\n';
			stk.pop();
		}
		else if (s.compare("size") == 0) cout << stk.size();
		else if (s.compare("empty") == 0) cout << stk.empty();
		else if (s.compare("top") == 0)
		{
			if (stk.empty())cout << "-1\n";
			else cout << stk.top() << '\n';
		}
	}
}