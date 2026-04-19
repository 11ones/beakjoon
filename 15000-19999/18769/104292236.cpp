// 2026년 3월 25일 01:16:15
// 13점
// 15328KB
// 1196ms
#include <bits/stdc++.h>
using namespace std;

int F(vector<int> &v, int x) {
  if (v[x] == x) return x;
  return F(v, v[x]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T, R, C, x, y, c;
  cin >> T;
  while (T--) {
    c = 0;
    cin >> R >> C;
    vector<int> v(R * C);
    for (int i = 0; i < R * C; ++i) {
      v[i] = i;
    }
    vector<array<int, 3>> m;
    for (int i = 0; i < R; ++i) {
      for (int j = 1; j < C; ++j) {
        cin >> x;
        m.push_back({x, i * C + j - 1, i * C + j});
      }
    }
    for (int i = 1; i < R; ++i) {
      for (int j = 0; j < C; ++j) {
        cin >> x;
        m.push_back({x, (i - 1) * C + j, i * C + j});
      }
    }
    sort(m.begin(), m.end());
    for (auto e : m) {
      x = F(v, e[1]), y = F(v, e[2]);
      if (x != y) c += e[0];
      v[y] = x;
    }
    cout << c << '\n';
  }
}