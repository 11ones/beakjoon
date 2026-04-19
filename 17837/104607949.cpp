// 2026년 4월 2일 02:46:18
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int dx[2][2] = {{1, -1}, {0, 0}};
  int dy[2][2] = {{0, 0}, {-1, 1}};
  int N, K;
  cin >> N >> K;
  vector<vector<int>> C(N, vector<int>(N));
  vector<vector<vector<int>>> P(N, vector<vector<int>>(N));
  for (auto &e : C)
    for (int &f : e) cin >> f;
  vector<array<int, 4>> v(K);
  for (int i = 0; i < K; ++i) {
    auto &t = v[i];
    cin >> t[0] >> t[1] >> t[2];
    --t[0], --t[1];
    t[3] = --t[2] % 2;
    t[2] = t[2] / 2;
    P[t[0]][t[1]].push_back(i);
    if (P[t[0]][t[1]].size() > 3) {
      cout << 1;
      return 0;
    }
  }
  for (int o = 1; o < 1001; ++o) {
    for (int i = 0; i < K; ++i) {
      auto &t = v[i];
      int &y = t[0], ty = y + dy[t[2]][t[3]];
      int &x = t[1], tx = x + dx[t[2]][t[3]];
      if (ty >= N || ty < 0 || tx >= N || tx < 0 || C[ty][tx] == 2) {
        t[3] = !t[3];
        ty = y + dy[t[2]][t[3]];
        tx = x + dx[t[2]][t[3]];
        if (ty >= N || ty < 0 || tx >= N || tx < 0 || C[ty][tx] == 2)
          ty = y, tx = x;
        else {
          --i;
          continue;
        }
      } else if (C[ty][tx] == 0) {
        int F = -1;
        for (int j = 0; j < P[y][x].size(); ++j) {
          if (P[y][x][j] == i) F = j;
          if (F != -1) {
            auto &T = P[y][x][j];
            P[ty][tx].push_back(T);
            if (P[y][x][j] != i) {
              v[T][0] = ty;
              v[T][1] = tx;
            }
          }
        }
        for (int j = P[y][x].size() - F; j > 0; --j) {
          P[y][x].pop_back();
        }
      } else {
        int F = -1;
        for (int j = 0; j < P[y][x].size(); ++j) {
          if (P[y][x][j] == i) F = j;
          if (F != -1) {
            for (int k = P[y][x].size() - 1; k >= F; --k) {
              auto &T = P[y][x][k];
              P[ty][tx].push_back(T);
              if (P[y][x][k] != i) {
                v[T][0] = ty;
                v[T][1] = tx;
              }
            }
            break;
          }
        }
        for (int j = P[y][x].size() - F; j > 0; --j) {
          P[y][x].pop_back();
        }
      }
      if (P[ty][tx].size() > 3) {
        cout << o;
        return 0;
      }
      v[i][0] = ty;
      v[i][1] = tx;
    }
  }
  cout << -1;
}