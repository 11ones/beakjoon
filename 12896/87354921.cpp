// 2024년 12월 10일 23:52:33
// 틀렸습니다
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
  int tmx = 1, mx, mxp, fmx = 1;
  queue<int> q;
  vector<int> d(n + 1), t;
  q.push(1);
  d[1] = 1;
  while (!q.empty()) {
    int tq = q.front();
    q.pop();
    for (auto e : v[tq]) {
      if (!d[e]) {
        q.push(e);
        d[e] = d[tq] + 1;
        if (tmx < d[e]) {
          tmx = d[e];
          mxp = e;
        }
      }
    }
  }
  mx = tmx;
  t.push_back(mxp);
  for (int i = mx - 1; i > 0; i--) {
    for (auto e : v[mxp]) {
      if (d[e] == i) {
        mxp = e;
        t.push_back(e);
        break;
      }
    }
  }
  reverse(t.begin(), t.end());
  for (auto e : v[1]) {
    if (e == t[1]) continue;
    q.push(e);
    fmx = 2;
  }
  while (!q.empty()) {
    int tq = q.front();
    q.pop();
    for (auto e : v[tq]) {
      if (d[e] > d[tq]) {
        q.push(e);
        fmx = max(fmx, d[e]);
      }
    }
  }
  for (int i = 1; i < t.size(); i++) {
    fmx++;
    fill(d.begin(), d.end(), 0);
    tmx = 1;
    d[t[i]] = 1;
    for (auto e : v[t[i]]) {
      if (e == t[i + 1] || e == t[i - 1]) continue;
      q.push(e);
      tmx = 2;
    }
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
    int x = max(max(tmx, fmx), mx - i);
    if (mx > x) {
      mx = x;
      goto E;
    }
    break;
  E:;
  }
  cout << mx - 1;
}