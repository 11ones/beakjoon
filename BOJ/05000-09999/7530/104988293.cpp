// 2026년 4월 13일 15:34:34
// 맞았습니다!!
// 2020KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, M, c;
  cin >> T;
  for (int o = 0; o < T; ++o) {
    cout << "Scenario #" << o + 1 << ":\n";
    cin >> N >> M;
    vector<int> v(M);
    for (auto &e : v) cin >> e;
    sort(v.begin(), v.end(), greater<>());
    c = 0;
    for (int i = 0; i < M; ++i) {
      c += v[i];
      if(c >= N) {
        cout << i + 1 << "\n\n";
        goto E;
      }
    }
    cout << "impossible\n\n";
    E:;
  }
}