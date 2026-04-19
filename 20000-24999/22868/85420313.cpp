// 2024년 10월 20일 13:58:15
// 맞았습니다!!
// 3536KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int n, m, a, b, r = 0;
array<vi, 10001> v{};
vi d(10001), t;

void p(int x, int y) {
  queue<int> q;
  q.push(x);
  while (1) {
    int qt = q.front();
    q.pop();
    for (auto e : v[qt]) {
      if (d[e] > d[qt] + 1) {
        d[e] = d[qt] + 1;
        if (e == y) {
          r += d[y];
          return;
        }
        q.push(e);
      }
    }
  }
}
int  f(int x, int c, int y) {
  for (auto e : v[x]) {
    if (d[e] == c) {
      t.push_back(e);
      if (t.size() == r && e == y) return 1;
      int z = f(e, c + 1, y);
      if (t.size() == r && z) return 1;
      t.pop_back();
    }
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  while (m--) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for (auto& e : v) sort(e.begin(), e.end());
  cin >> a >> b;

  fill(d.begin(), d.end(), 1e7);
  d[a] = 0;
  p(a, b);
  f(a, 1, b);
  fill(d.begin(), d.end(), 1e7);
  for (auto e : t) d[e] = -1;
  d[b] = 0;
  p(b, a);
  cout << r;
}