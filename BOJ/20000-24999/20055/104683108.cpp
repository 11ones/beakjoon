// 2026년 4월 4일 05:25:34
// 맞았습니다!!
// 2020KB
// 104ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, K, c = 0, p, i = 0;
  cin >> N >> K;
  p = N - 1;
  N *= 2;
  vector<int> v(N), u(N);

  for (int &e : v) cin >> e;
  for (; c < K; ++i) {
    p = (p + N - 1) % N;
    u[p] = 0;
    for (int j = p - 1; j >= p - N / 2; --j) {
      int t = (j + N + 1) % N;
      if (u[(j + N) % N] && !u[t] && v[t]) {
        u[(j + N) % N] = 0;
        u[t] = 1;
        --v[t];
        if (!v[t]) ++c;
      }
    }
    u[p] = 0;
    int t = (p + N / 2 + 1) % N;
    if (v[t]) {
      u[t] = 1;
      --v[t];
      if (!v[t]) ++c;
    }
  }
  cout << i;
}