// 2024년 12월 10일 23:00:12
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<int>> v(n + 1, vector<int>());
  for (int i = 1; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int pp = 1, p = 1, tmx = 0, mx;
  queue<int> q;
  vector<int> d(n + 1);
  q.push(1);
  d[1] = 1;
  while (!q.empty()) {
    int tq = q.front();
    q.pop();
    for (auto e : v[tq]) {
      if (!d[e]) {
        q.push(e);
        d[e] = d[tq] + 1;
        tmx = max(tmx, d[e]);
      }
    }
  }
  mx = tmx;
  while (1) {
    for (auto e : v[p]) {
      if (pp == e) continue;
      fill(d.begin(), d.end(), 0);
      tmx = 0;
      d[e] = 1;
      q.push(e);
      while (!q.empty()) {
        int tq = q.front();
        q.pop();
        for (auto ee : v[tq]) {
          if (!d[ee]) {
            q.push(ee);
            d[ee] = d[tq] + 1;
            tmx = max(tmx, d[ee]);
          }
        }
      }
      if (mx > tmx) {
        mx = tmx;
        pp = p;
        p = e;
        goto E;
      }
    }
    break;
  E:;
  }
  cout << mx - 1;
}