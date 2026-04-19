// 2026년 3월 1일 04:03:04
// 맞았습니다!!
// 2152KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int dx[2] = {0, 1};
  int dy[2] = {1, 0};
  int N;
  cin >> N;
  vector<vector<int>> v(N, vector<int>(N));
  auto u = v;
  for (auto &e : v) for (auto &f : e) cin >> f;
  u[0][0] = 1;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      for (int k = 0; k < 2; ++k) {
        int ty = i + dy[k] * v[i][j];
        int tx = j + dx[k] * v[i][j];
        if(ty >= N || tx >= N) continue;
        u[ty][tx] = max(u[ty][tx], u[i][j]);
      }
    }
  }
  cout << (u[N - 1][N - 1] ? "HaruHaru" : "Hing");
}