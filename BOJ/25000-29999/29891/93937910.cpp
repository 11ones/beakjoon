// 2025년 5월 6일 01:36:38
// 100점
// 3448KB
// 124ms
#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, k, s = 0, x;
	cin >> n >> k;
	vector<int> p, m;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		x > 0 ? p.push_back(x) : m.push_back(-x);
	}
	sort(p.begin(), p.end());
	sort(m.begin(), m.end());
	for(int i = p.size() - 1; i >= 0; i -= k) s += p[i];	
	for(int i = m.size() - 1; i >= 0; i -= k) s += m[i];	
	cout << s * 2;
}