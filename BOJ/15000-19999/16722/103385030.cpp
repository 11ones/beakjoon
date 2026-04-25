// 2026년 2월 28일 21:44:48
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string q, r, s;
  array<array<int, 3>, 9> A;
  array<int, 3> C;
  int N, c = 0, p = 0, B[9][9][9] = {};
  map<string, int> m = {{"CIRCLE", 0}, {"TRIANGLE", 1}, {"SQUARE", 2}},
                   n = {{"YELLOW", 0}, {"RED", 1}, {"BLUE", 2}},
                   o = {{"GRAY", 0}, {"WHITE", 1}, {"BLACK", 2}};
  for (auto &e : A) {
    cin >> q >> r >> s;
    e = {m[q], n[r], o[s]};
  }
  for (int i = 0; i < 9; ++i)
    for (int j = i + 1; j < 9; ++j)
      for (int k = j + 1; k < 9; ++k) {
        for (int l = 0; l < 3; ++l)
          if ((A[i][l] + A[j][l] + A[k][l]) % 3) goto E;
        c += B[i][j][k] = 1;
      E:;
      }
  cin >> N;
  while (N--) {
    cin >> q;
    if (q == "H") {
      cin >> C[0] >> C[1] >> C[2];
      sort(C.begin(), C.end());
      auto &t = B[C[0] - 1][C[1] - 1][C[2] - 1];
      p += t ? 1 : -1;
      c -= t;
      t = 0;
    } else {
      p += c ? -1 : 3;
    }
  }
  cout << p;
}