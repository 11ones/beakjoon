// 2025년 5월 6일 01:44:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
	const long MOD = 1'000'000'007;
	long A, X, t = 2, r = 1;
	cin >> A >> X;
	A %= MOD;
	while(X) {
		if(X % t) {
			r = (r * A) % MOD;
			X -= t / 2;
		}
		t *= 2;
		A = (A * A) % MOD;
	}
	cout << r;
}