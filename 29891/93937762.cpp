// 2025년 5월 6일 01:29:09
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, s = 0;
	cin >> n >> k;
	vector<int> v(n);
	for(int &e : v) cin >> e;
	sort(v.begin(), v.end());
	for(int i = k - 1; i < n; i+=k) {
		s += v[i] * 2;
	}
	cout << s;
}