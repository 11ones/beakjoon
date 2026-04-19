// 2026년 3월 1일 03:52:26
// 맞았습니다!!
// 14360KB
// 100ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x, y, c = 0;
  cin >> N;
  vector<int> C(N);
  for (auto &e : C) cin >> e;
  vector<vector<int>> v(N, vector<int>());
  while (--N) {
    cin >> x >> y;
    v[--x].push_back(--y);
    v[y].push_back(x);
  }
  queue<array<int, 3>> q;
  q.push({0, 0, -1});
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    if (t[1] != C[t[0]]) {
      t[1] = C[t[0]];
      ++c;
    }
    for (auto e : v[t[0]]) {
      if (e == t[2]) continue;
      q.push({e, t[1], t[0]});
    }
  }
  cout << c;
}