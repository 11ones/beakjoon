// 2026년 1월 28일 03:36:10
// 맞았습니다!!
// 6776KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  double d = 0;
  int N, x, y;
  cin >> N;
  map<int, int> m;
  m[0] = 0;
  while(N--) {
    cin >> x >> y;
    m[x] = y;
  }
  auto t = m.begin(), u = t;
  ++u;
  while(u != m.end()) {
    d = max(d, (double)abs(u->second - t->second) / (u->first - t->first));
    ++t; ++u;
  }
  cout << d;
}