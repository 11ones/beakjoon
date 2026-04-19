// 2026년 3월 16일 04:39:33
// 맞았습니다!!
// 5996KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int dx[2] = {1, 0};
  int dy[2] = {0, -1};
  int N, M, x, y, d, t;
  cin >> N >> M;
  t = N * 2 + M * 2;
  vector<vector<int>> v(N, vector<int>(M));
  vector<int> u(t);
  for (auto &e : v) for (auto &f : e) cin >> f;

  for (int i = 1; i <= N + M; ++i) {
    if (i <= N) x = 0, y = i - 1, d = 0;
    else x = i - N - 1, y = N - 1, d = 1;
    while (x >= 0 && x < M && y >= 0 && y < N) {
      if (v[y][x]) d = !d;
      x += dx[d];
      y += dy[d];
    }
    if (x == M) {
      u[t - M - y - 1] = i;
      u[i - 1] = t - M - y;
    } else {
      u[t - x - 1] = i;
      u[i - 1] = t - x;
    }
  }
  for (auto e : u) cout << e << " ";
}