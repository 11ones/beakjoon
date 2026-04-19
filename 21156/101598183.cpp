// 2026년 1월 4일 21:57:32
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, M;
  cin >> N >> M;
  vector<int> v(N), p(N);
  for (int i = 0; i < N; ++i) {
    v[i] = p[i] = i;
  }
  while (M--) {
    char t;
    int a, b;
    cin >> t >> a >> t >> b;
    int x = p[--a], y = p[--b];
    if (x > y) {
      for (int i = y; i < x; ++i) {
        v[i] = v[i + 1];
        p[v[i]] = i;
      }
      v[x] = b;
      p[b] = x;
    }
  }
  for (auto e : v) {
    cout << "T" << e + 1 << ' ';
  }
}