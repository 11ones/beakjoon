// 2026년 2월 23일 05:10:15
// 맞았습니다!!
// 72380KB
// 1804ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, x;
  cin >> T;
  while (T--) {
    cin >> N;
    map<int, int> v;
    while (N--) {
      cin >> x;
      v[x] = 1;
    }
    cin >> N;
    while (N--) {
      cin >> x;
      cout << v[x] << '\n';
    }
  }
}