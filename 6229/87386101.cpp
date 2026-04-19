// 2024년 12월 12일 00:01:35
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n, m1, m2;
  cin >> m >> n >> m1 >> m2;
  int dx[8] = {m1, m1, -m1, -m1, m2, m2, -m2, -m2};
  int dy[8] = {m2, -m2, m2, -m2, m1, -m1, m1, -m1};
  array<array<int, 30>, 30> v;
  queue<pair<int, int>> q;
  pair<int, int> l;
  auto d = v;
  fill(d.front().begin(), d.back().end(), 1e8);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
      if (v[i][j] == 3) {
        q.push({i, j});
        d[i][j] = 1;
      }
      if (v[i][j] == 4) {
        l = {i, j};
      }
    }
  }
  while (!q.empty()) {
    int qy = q.front().first;
    int qx = q.front().second;
    q.pop();
    for (int i = 0; i < 8; i++) {
      int ty = qy + dy[i];
      int tx = qx + dx[i];
      if (ty >= m || ty < 0 || tx >= n || tx < 0 || v[ty][tx] == 0 || v[ty][tx] == 2 || d[ty][tx] < d[qy][qx] + 1) continue;
      d[ty][tx] = d[qy][qx] + 1;
      q.push({ty, tx});
    }
  }
  cout << d[l.first][l.second] - 1;
}