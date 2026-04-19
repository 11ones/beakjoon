// 2025년 10월 7일 01:40:11
// 맞았습니다!!
// 3704KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 1e7;
  cin >> N;
  vector<long> v(N);
  for (long &e : v) cin >> e;
  if (N < 3) {
    cout << 0;
    return 0;
  }
  for (int i = -1; i < 2; ++i) {
    for (int j = -1; j < 2; ++j) {
      int tc = abs(i) + abs(j);
      auto x = v;
      x[0] += i;
      x[1] += j;
      long t = x[1] - x[0];
      for (int k = 2; k < N; ++k) {
        long d = x[k] - x[k - 1];
        if (abs(d - t) > 1) goto E;
        if (d - t == 1) --x[k], ++tc;
        if (d - t == -1) ++x[k], ++tc;
      }
      c = min(tc, c);
    E:;
    }
  }
  cout << (c > 1e6 ? -1 : c);
}