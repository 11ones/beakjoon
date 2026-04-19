// 2026년 1월 4일 23:21:22
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x, y, c = 0;
  cin >> N;
  vector<int> v(1001), u(1001);
  while (N--) {
    cin >> x >> y;
    v[x] = u[x] = y;
  }
  for (int i = 1; i < 1000; ++i) {
    v[i + 1] = max(v[i], v[i + 1]);
    u[1000 - i] = max(u[1000 - i], u[1001 - i]);
  }
  for (int i = 1; i < 1001; ++i) {
    c += min(v[i], u[i]);
  }
  cout << c;
}