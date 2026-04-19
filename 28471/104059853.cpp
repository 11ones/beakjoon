// 2026년 3월 19일 03:38:42
// 맞았습니다!!
// 21888KB
// 224ms
#include <bits/stdc++.h>
using namespace std;

int dx[7] = {1, 1, 1, 0, -1, -1, -1};
int dy[7] = {1, 0, -1, -1, -1, 0, 1};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0;
  cin >> N;
  vector<vector<char>> v(N, vector<char>(N));
  vector<vector<int>> u(N, vector<int>(N));
  queue<array<int, 2>> q;
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j) {
      cin >> v[i][j];
      if (v[i][j] == 'F') q.push({i, j});
    }
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    for (int i = 0; i < 7; ++i) {
      int tx = t[1] + dx[i];
      int ty = t[0] + dy[i];
      if (ty >= N || ty < 0 || tx >= N || tx < 0 || v[ty][tx] != '.' || u[ty][tx]) continue;
      u[ty][tx] = 1;
      ++c;
      q.push({ty, tx});
    }
  }
  cout << c;
}