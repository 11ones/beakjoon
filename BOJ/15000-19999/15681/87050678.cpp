// 2024년 12월 1일 14:42:37
// 맞았습니다!!
// 10020KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, r, q;
  cin >> n >> r >> q;
  vector<vector<int>> v(n + 1, vector<int>());
  vector<int> a(n + 1), f(n + 1), p(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  queue<pair<int, int>> tq;
  tq.push({r, r});
  while(!tq.empty()) {
    int tf = tq.front().first;
    int ts = tq.front().second;
    tq.pop();
    for(auto e : v[tf]) {
      if(e != ts) {
        p[e] = tf;
        f[tf]++;
        tq.push({e, tf});
      }
    }
  }
  queue<int> u;
  for (int i = 1; i <= n; i++) {
    a[i] = 1;
    if (!f[i]) {
      u.push(i);
    }
  }
  while (!u.empty()) {
    int x = u.front();
    u.pop();
    a[p[x]] += a[x];
    f[p[x]]--;
    if(!f[p[x]]) {
      u.push(p[x]);
    }
  }
  while (q--) {
    int x;
    cin >> x;
    cout << a[x] << '\n';
  }
}