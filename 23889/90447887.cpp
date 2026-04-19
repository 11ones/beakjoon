// 2025년 2월 23일 12:08:26
// 9점
// 2364KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

struct cmp {
  bool operator()(A a, A b) {
    if (a[0] == b[0]) return a[1] < b[1];
    return a[0] > b[0];
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;
  vector<int> v(n + 1), u(k), t(m);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  for (auto &e : u) cin >> e;
  u.push_back(n);
  vector<A> x(k);
  for (int i = 0; i < k; i++) {
    x[i] = {v[u[i + 1] - 1] - v[u[i] - 1], u[i]};
  }
  sort(x.begin(), x.end(), cmp());
  for (int i = 0; i < m; i++) {
    t[i] = x[i][1];
  }
  sort(t.begin(), t.end());
  for(auto e : t) cout << e << '\n';
}