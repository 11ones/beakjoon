// 2026년 3월 27일 04:19:24
// 맞았습니다!!
// 2020KB
// 32ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, t, r, g, b;
  char c[6] = {'#', 'o', '+', '-', '.', '.'};
  cin >> N >> M;
  while (N--) {
    t = M;
    while (t--) {
      cin >> r >> g >> b;
      r = 2126 * r + 7152 * g + 722 * b;
      r /= 510000;
      cout << c[r];
    }
    cout << '\n';
  }
}