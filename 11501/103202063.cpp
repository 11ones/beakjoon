// 2026년 2월 23일 04:37:22
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, c;
  cin >> T;
  while (T--) {
    cin >> N;
    vector<int> v(N), u;
    for (auto &e : v) cin >> e;
    u = v, c = 0;
    for (int i = N - 2; i >= 0; --i) {
      u[i] = max(u[i], u[i + 1]); 
    }
    for (int i = 0; i < N; ++i) {
      c += u[i] - v[i];
    }
    cout << c << '\n';
  }
}