// 2026년 3월 20일 04:28:09
// 35점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int dx[7] = {1, 1, 1, 0, -1, -1, -1};
int dy[7] = {1, 0, -1, -1, -1, 0, 1};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, mx = 0, t;
  cin >> N;
  vector<int> v(N), u(N);
  for (auto &e : v) cin >> e;
  for (int i = 0; i < N; ++i) {
    if (u[i]) continue;
    t = v[i];
    for (int j = i + 1; j < N; ++j) {
      if(v[j] == t + 1) ++t, u[j] = 1;
    }
    mx = max(mx, t - v[i] + 1);
  }
  cout << mx;
}