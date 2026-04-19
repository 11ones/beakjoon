// 2026년 3월 15일 04:38:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, M, K, x;
  cin >> N >> M;
  vector<int> v(200000, -1), c(N);
  for (int i = 0; i < N; ++i) {
    cin >> K;
    for (int j = 0; j < K; ++j) {
      cin >> x;
      if (v[--x] == -1) v[x] = i;
    }
  }
  while (M--) {
    cin >> x;
    if (v[--x] != -1) ++c[v[x]];
  }
  for (auto e : c) cout << e << ' ';
}