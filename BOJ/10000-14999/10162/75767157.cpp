// 2024년 3월 26일 23:33:03
// 100점
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
	int a[] = { 300, 60, 10 };
	int T;
	cin >> T;
	for (auto& e : a) {
		int t = T / e;
		T = T % e;
		e = t;
	}
	if (T == 0) for (auto e : a) cout << e << ' ';
	else cout << -1;
}