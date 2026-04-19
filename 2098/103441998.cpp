// 2026년 3월 2일 22:55:10
// 맞았습니다!!
// 6440KB
// 392ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<vector<int>> v(N, vector<int>(N)), D(N, vector<int>(1 << N, 1e9));
  for (auto &e : v)
    for (auto &f : e) cin >> f;
  D[0][0] = 0;
  for (int o = 0; o < N; ++o) {
    for (int i = 0; i < N; ++i) {
      for (int k = 0; k < N; ++k) {
        if (!v[i][k]) continue;
        for (int j = 0; j < (1 << N); ++j) {
          if (D[i][j] > 1e8 || j & (1 << k)) continue;
          D[k][j | (1 << k)] = min(D[k][j | (1 << k)], D[i][j] + v[i][k]);
        }
      }
    }
  }
  cout << D[0][(1 << N) - 1];
}