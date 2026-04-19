// 2026년 2월 22일 00:42:32
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int N, L, R, X, c = 0;
vector<int> v;

void r(int f, int p, int t) {
  for (int i = p; i < N; ++i) {
    t += v[i];
    if (t > R) break;
    if (t >= L && v[i] - f >= X) ++c;
    r(t == v[i] ? v[i] : f, i + 1, t);
    t -= v[i];
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> N >> L >> R >> X;
  map<int, int> m;
  v.resize(N);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  r(0, 0, 0);
  cout << c;
}