// 2026년 1월 5일 00:13:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, mn = 1, mx = 1, c = 0, t, x = 0;
  cin >> N >> t;
  if (t > 0) {
    cout << -1 << '\n';
    return 0;
  }
  while (--N) {
    cin >> t;
    if (t == -1) {
      ++c;
      continue;
    }
    if (t > x + c + 1) {
      cout << -1 << '\n';
      return 0;
    }
    if (c) {
      if (c >= t) {
        mx += c - t + 1;
        ++mn;
      }
      c = 0;
    } else if (!t)
      ++mx, ++mn;
    x = t;
  }
  if (c) {
    mx += c;
  }
  cout << mn << " " << mx;
}