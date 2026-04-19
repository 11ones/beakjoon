// 2024년 10월 20일 12:52:33
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int n, m, a, b, r;
vi t;
array<vi, 10001> v{};

void f(vi& d, int x, int c, int y, vi& vst) {
  if ((c >= t.size() && !t.empty())) return;
  if (y == x) t = vst;
  for (auto e : v[x]) {
    if (d[e] > d[x] + 1) {
      vst.push_back(e);
      d[e] = d[x] + 1;
      f(d, e, c + 1, y, vst);
      vst.pop_back();
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, a, b;
  cin >> n >> m;
  while (m--) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for (auto& e : v) sort(e.begin(), e.end());
  cin >> a >> b;
  vi d(n + 1), vst;
  fill(d.begin(), d.end(), 1e7);
  d[a] = 0;
  f(d, a, 0, b, vst);
  r = t.size();
  fill(d.begin(), d.end(), 1e7);
  for (auto e : t) d[e] = 0;
  d[a] = 1e7;
  t.clear();
  f(d, b, 0, a, vst);
  cout << r + t.size();
}