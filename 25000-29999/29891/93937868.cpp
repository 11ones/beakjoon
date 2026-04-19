// 2025년 5월 6일 01:33:56
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
	long n, k, s = 0;
	cin >> n >> k;
	vector<int> v(n);
	for(int &e : v) cin >> e;
	sort(v.begin(), v.end());
	for(int i = n - 1; i >= 0; i -= k) s += v[i];	
	cout << s * 2;
}