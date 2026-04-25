#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &u, int x) {
  if (u[x] == x) return x;
  return u[x] = f(u, u[x]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N;
  cin >> N;
  vector<vector<int>> v(N, vector<int>(N, 1e9)), w(N, vector<int>(N, 1e9));
  vector<vector<array<int, 2>>> z(N, vector<array<int, 2>>());
  vector<array<int, 3>> q;
  vector<int> c(N);
  for (int i = 0; i < N - 1; ++i) {
    for (int j = i + 1; j < N; ++j) {
      cin >> v[i][j];
      q.push_back({v[i][j], i, j});
    }
  }
  sort(q.begin(), q.end());
  vector<int> u(N);
  for (int i = 0; i < N; ++i) u[i] = i;
  for (auto e : q) {
    int x = f(u, e[1]);
    int y = f(u, e[2]);
    if (x != y) {
      w[e[1]][e[2]] = e[0];
      z[e[1]].push_back({e[2], e[0]});
      z[e[2]].push_back({e[1], e[0]});
      ++c[e[1]];
      u[y] = x;
    }
  }
  for (int i = 0; i < N; ++i) {
    queue<array<int, 2>> r;
    r.push({i, 0});
    vector<int> s(N);
    s[i] = 1;
    while (!r.empty()) {
      auto t = r.front();
      r.pop();
      for (auto e : z[t[0]]) {
        if (s[e[0]]) continue;
        s[e[0]] = 1;
        r.push({e[0], t[1] + e[1]});
        if (i < e[0] && w[i][e[0]] > 1e8) {
          w[i][e[0]] = t[1] + e[1];
          ++c[i];
          if (c[i] == N - i - 1) goto E;
        }
      }
    }
  E:;
  }
  
  cout << (v == w ? "Yes" : "No");
}