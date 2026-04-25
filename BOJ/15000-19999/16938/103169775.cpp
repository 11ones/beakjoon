// 2026년 2월 22일 00:52:46
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int N, L, R, X, c;
vector<int> v;

void r(int f, int p, int t) {
  for (int i = p; i < N; ++i) {
    if (t + v[i] > R) break;
    if (t + v[i] >= L && v[i] - f >= X && f) ++c;
    r(t ? f : v[i], i + 1, t + v[i]);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> N >> L >> R >> X;
  v.resize(N);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  r(0, 0, 0);
  cout << c;
}