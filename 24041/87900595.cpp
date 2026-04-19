// 2024년 12월 28일 15:17:46
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n, g, k;
int f(vector<array<long, 3>> &v, long a, long b) {
  long m = (a + b) / 2, c = 0;
  vector<long> q;
  for (auto e : v) {
    long t = e[0] * max((long)1, m - e[1]);
    c += t;
    if (e[2]) q.push_back(t);
  }
  sort(q.begin(), q.end(), greater<long>());
  for (int i = 0; i < k; i++) {
    c -= q[i];
  }
  if (c > g) {
    return f(v, a, m);
  } else {
    if (a + 1 == b) return a;
    return f(v, m, b);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> g >> k;
  vector<array<long, 3>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1] >> v[i][2];
  }
  cout << f(v, 0, 1e10);
}