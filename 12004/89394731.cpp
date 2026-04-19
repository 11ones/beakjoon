// 2025년 2월 1일 12:48:17
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int f(int x, vector<int> d) { return x == d[x] ? x : d[x] = f(d[x], d); }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, a, b, x = 0, c;
  cin >> n >> m;
  vector<vector<int>> v(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  vector<int> d(n + 1), s(n), t(n + 1), u(n);
  set<int> r;
  for (auto &e : s) cin >> e;
  for (int i = 1; i <= n; i++) {
    d[i] = i;
  }
  for (int i = n - 1; i >= 0; i--) {
    t[s[i]] = 1;
    r.insert(s[i]);
    a = f(s[i], d);
    for (auto e : v[s[i]]) {
      if (!t[e]) continue;
      b = f(e, d);
      if (a != b) d[b] = a;
    }
    for (auto e : r) {
      if (a != f(e, d)) {
        goto E;
      }
    }
    u[i] = 1;
  E:;
  }
  for(auto e : u) cout << (e ? "YES\n" : "NO\n");
}