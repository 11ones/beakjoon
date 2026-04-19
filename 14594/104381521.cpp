// 2026년 3월 27일 04:33:56
// 맞았습니다!!
// 2152KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v, int x) {
  if (v[x] == x) return x;
  return v[x] = f(v, v[x]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x, y, tx, ty, c = 1;
  cin >> N >> M;
  vector<int> v(N);
  for (int i = 0; i < N; ++i) v[i] = i;
  while (M--) {
    cin >> x >> y;
      --x, --y;
    for (int i = x; i < y; ++i) {
      tx = f(v, i);
      ty = f(v, y);
      v[tx] = ty;
    }
  }
  for (int i = 1; i < N; ++i)
    if (f(v, i) != f(v, i - 1)) ++c;
  cout << c;
}