// 2026년 4월 1일 04:03:36
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, c = 0, f;
  cin >> N;
  vector<long> v(N);
  for (auto &e : v) cin >> e;
  while(1) {
    f = 1;
    for (int i = 2; i < N; ++i) {
      long t = v[i - 1] * 2 - v[i] - v[i - 2];
      if (t <= 0) continue;
      c += (t + 1) / 2;
      v[i - 1] -= (t + 1) / 2;
      f = 0;
    }
    if (f) {
      cout << c;
      return 0;
    }
  }
}