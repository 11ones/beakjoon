// 2024년 12월 17일 23:22:22
// 맞았습니다!!
// 2496KB
// 84ms
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &u, vector<pair<int, int>> &c, int x) {
  if (u[x] == x) return x;
  u[x] = f(u, c, u[x]);
  c[u[x]].first += c[x].first;
  c[u[x]].second += c[x].second;
  c[x] = {0, 0};
  return u[x];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;
  vector<pair<int, int>> c(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> c[i].first;
    c[i].second = 1;
  }
  vector<int> u(n + 1);
  for (int i = 1; i <= n; i++) {
    u[i] = i;
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a = f(u, c, a);
    b = f(u, c, b);
    if (a != b) {
      c[u[b]].first += c[a].first;
      c[u[b]].second += c[a].second;
      c[a] = {0, 0};
      u[a] = b;
    }
  }
  vector<int> d(k);
  sort(c.begin(), c.end(), greater<>());
  for (auto e : c) {
    if (e.second == 0) break;
    vector<pair<int, int>> t;
    for (int i = e.second; i < k; i++) {
      if (d[i] < d[i - e.second] + e.first) {
        t.push_back({i, d[i - e.second] + e.first});
      }
    }
    for (auto ee : t) {
      d[ee.first] = ee.second;
    }
  }
  cout << d[k - 1];
}