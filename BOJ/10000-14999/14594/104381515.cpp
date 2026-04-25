// 2026년 3월 27일 04:33:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x, y, tx, ty, c = 1;
  cin >> N >> M;
  vector<int> v(N, 1);
  while (M--) {
    cin >> x >> y;
    for (int i = x; i < y; ++i) v[i] = 0;
  }
  for (int i = 1; i < N; ++i) c += v[i];
  cout << c;
}