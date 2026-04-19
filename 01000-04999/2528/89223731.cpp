// 2025년 1월 27일 15:53:59
// 런타임 에러 (DivisionByZero)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int d[2] = {1, -1};
  int n, l, p = 0, t = 0;
  cin >> n >> l;
  vector<array<int, 3>> v(n);
  for (auto &e : v) {
    cin >> e[1] >> e[2];
    e[0] = e[2] ? l - e[1] : 0;
  }
  while (p < n - 1) {
    int tt = 0;
    auto &vp = v[p];
    auto &vp1 = v[p + 1];
    while (vp[0] + vp[1] < vp1[0] || vp[0] > vp1[0] + vp1[1]) {
      tt++;
      vp[0] += d[vp[2]];
      vp1[0] += d[vp1[2]];
      if (vp[0] == l - vp[1]) vp[2] = !vp[2];
      if (vp1[0] == l - vp1[1]) vp1[2] = !vp1[2];
    }
    p++;
    for (int i = p + 1; i < n; i++) {
      auto &vi = v[i];
      int g = l - vi[1];
      int x = (g * 2 + d[vi[2]] * vi[0] + tt) % (g * 2);
      vi = {x / g ? g - x % g : x % g, vi[1], x / g};
    }
    t += tt;
  }
  cout << t;
}