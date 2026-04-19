// 2026년 1월 4일 23:54:25
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, mn = 1, mx = 1, c = 0, t;
  cin >> N >> t;
  while (--N) {
    cin >> t;
    if (t == -1) {
      ++c;
      continue;
    }
    if (c) {
      if (c >= t) {
        mx += c - t + 1;
        ++mn;
      }
      c = 0;
    } else if (!t)
      ++mx, ++mn;
  }
  if (c) {
    mx += c;
  }
  cout << mn << " " << mx;
}