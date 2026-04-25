// 2026년 3월 15일 04:54:58
// 맞았습니다!!
// 132704KB
// 532ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, M, K, x;
  cin >> N >> M;
  vector<int> c(N);
  map<int, queue<int>> m;
  for (int i = 0; i < N; ++i) {
    cin >> K;
    for (int j = 0; j < K; ++j) {
      cin >> x;
      m[x].push(i);
    }
  }
  while (M--) {
    cin >> x;
    if (!m[x].empty()) {
      ++c[m[x].front()];
      m[x].pop();
    }
  }
  for (auto e : c) cout << e << ' ';
}