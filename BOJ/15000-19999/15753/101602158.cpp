// 2026년 1월 4일 23:46:54
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, mn = 1, mx = 1, c = 0, t;
  cin >> N >> t;
  while (--N) {
    cin >> t;
    if (t == -1) {
      ++c;
      continue;
    }
    if (c) {
      if (c > t) {
        mx += c - t + 1;
        ++mn;
      }
      c = 0;
    } else if (!t)
      ++mx, ++mn;
  }
  cout << mn << " " << mx;
}