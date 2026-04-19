// 2025년 9월 29일 18:31:53
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, S, c = 0, mx = 0;
  cin >> R >> S;
  vector<vector<char>> v(R, vector<char>(S));
  for (auto &e : v) {
    for (auto &f : e) {
      cin >> f;
    }
  }
  int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
  int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < S; ++j) {
      int t = 0;
      for (int k = 0; k < 8; ++k) {
        int ty = dy[k] + i;
        int tx = dx[k] + j;
        if (tx < 0 || tx >= S || ty < 0 || ty >= R || v[ty][tx] == '.') continue;
        ++t;
      }
      v[i][j] == 'o' ? c += t : mx = max(mx, t);
    }
  }
  cout << c / 2 + mx;
}