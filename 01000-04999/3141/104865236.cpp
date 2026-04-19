// 2026년 4월 9일 03:07:14
// 틀렸습니다
// KB
// ms
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
  for (auto &e : v) {
    cin >> e[0] >> e[1] >> s;
    e[0] *= 2;
    e[1] *= 2;
    e[2] = m[s];
  }
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      long t = abs(v[i][2] - v[j][2] + 4) % 4;
      if (t & 1) {
        long x = abs(dy[v[i][2]] ? v[i][1] - v[j][1] : v[i][0] - v[j][0]);
        if (v[i][0] + dx[v[i][2]] * x == v[j][0] + dx[v[j][2]] * x &&
            v[i][1] + dy[v[i][2]] * x == v[j][1] + dy[v[j][2]] * x) {
          u[x].push_back({i, j});
        }
      } else if (t == 2) {
        long x = abs(dy[v[i][2]] ? v[i][1] - v[j][1] : v[i][0] - v[j][0]) / 2;
        if (v[i][0] + dx[v[i][2]] * x == v[j][0] + dx[v[j][2]] * x &&
            v[i][1] + dy[v[i][2]] * x == v[j][1] + dy[v[j][2]] * x) {
          u[x * 2].push_back({i, j});
        }
      }
    }
  }
  vector<int> w(N, 1);
  for (auto e : u) {
    set<long> t;
    for (auto f : e.second) {
      if (w[f[0]] && w[f[1]]) t.insert(f[0]), t.insert(f[1]);
    } 
    for (auto f : t) w[f] = 0;
  }
  long f = 0;
  for (int i = 0; i < N; ++i) {
    if (w[i])
      cout << i + 1 << '\n';
    else
      ++f;
  }
  if (f == N) cout << "all\n";
}