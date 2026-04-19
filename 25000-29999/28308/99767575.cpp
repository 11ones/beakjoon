// 2025년 10월 28일 14:24:53
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

  string S;
  int R, C, L, c = 0;
  cin >> S >> R >> C;
  L = S.size();
  vector<vector<char>> v(R, vector<char>(C));
  for (auto& e : v)
    for (auto& f : e) cin >> f;
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      if (v[i][j] != S[0]) {
        continue;
      }
      for (int k = 0; k < 9; ++k) {
        int ty = i;
        int tx = j;
        for (int l = 1; l < L; ++l) {
          ty += dy[k];
          tx += dx[k];
          if (ty < 0 || ty >= R || tx < 0 || tx >= C || v[ty][tx] != S[l]) goto E;
          if (L == 2) break;
          if (l != L - 1) {
            for (int m = 2; m < 7; m += 4) {
              int tty = ty;
              int ttx = tx;
              for (int n = l + 1; n < L; ++n) {
                tty += dy[(k + m) % 8];
                ttx += dx[(k + m) % 8];
                if (tty < 0 || tty >= R || ttx < 0 || ttx >= C || v[tty][ttx] != S[n]) goto F;
              }
              ++c;
            F:;
            }
          }
        }
        ++c;
      E:;
      }
    }
  }
  cout << c;
}