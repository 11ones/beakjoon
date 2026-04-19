// 2026년 4월 9일 22:05:01
// 맞았습니다!!
// 2300KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  int N;
  cin >> N;
  map<string, int> m = {{"right", 0}, {"down", 1}, {"left", 2}, {"up", 3}};
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0, 1};
  vector<array<long, 3>> v(N);
  map<long, vector<array<long, 2>>> u;
  for (auto &[a, b, c] : v) {
    cin >> a >> b >> s;
    a *= 2;
    b *= 2;
    c = m[s];
  }
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      long t = abs(v[i][2] - v[j][2] + 4) % 4;
      if (!t) continue;
      long x = abs(dy[v[i][2]] ? v[i][1] - v[j][1] : v[i][0] - v[j][0]);
      if (t == 2) x /= 2;
      if (v[i][0] + dx[v[i][2]] * x == v[j][0] + dx[v[j][2]] * x &&
          v[i][1] + dy[v[i][2]] * x == v[j][1] + dy[v[j][2]] * x) {
        u[x].push_back({i, j});
      }
    }
  }
  vector<int> w(N, 1);
  for (auto e : u) {
    set<int> t;
    for (auto [a, b] : e.second) {
      if (w[a] && w[b]) t.insert(a), t.insert(b);
    }
    for (auto f : t) w[f] = 0;
  }
  int f = 0;
  for (int i = 0; i < N; ++i) {
    if (w[i])
      cout << i + 1 << '\n';
    else
      ++f;
  }
  if (f == N) cout << "all";
}