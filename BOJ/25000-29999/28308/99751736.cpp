// 2025년 10월 27일 21:33:01
// 틀렸습니다
// KB
// ms
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
  for(int i = 0; i < R; ++i) {
    for(int j = 0; j < C; ++j) {
      if(v[i][j] != S[0]) {
        continue;
      }
      for(int k = 0; k < 9; ++k) {
        int ty = i;
        int tx = j;
        for(int l = 1; l < L; ++l) {
          ty += dy[k];
          tx += dx[k];
          if(ty < 0 || ty >= R || tx < 0 || tx >= C || v[ty][tx] != S[l]) goto E;
        }
        ++c;
        E:;
      }
    }
  }
  cout << c;
}