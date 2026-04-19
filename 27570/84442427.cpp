// 2024년 9월 28일 00:38:29
// 맞았습니다!!
// 15948KB
// 48ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  array<array<int, 1000>, 1000> a{}, d{};

  int n, m, mx = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char x;
      cin >> x;
      if (x == 'X') {
        a[i][j] = 1;
        d[i][j] = 10000;
      }
    }
  }
  queue<pair<pair<int, int>, int>> q;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j]) {
        int cnt = 0;
        for (int k = 0; k < 4; k++) {
          int tx = j + dx[k];
          int ty = i + dy[k];
          if (tx >= m || tx < 0 || ty >= n || ty < 0) break;
          cnt += a[ty][tx];
        }
        if (cnt != 4) {
          q.push({{i, j}, 1});
          d[i][j] = 1;
        }
      }
    }
  }
  while (!q.empty()) {
    int qx = q.front().first.second;
    int qy = q.front().first.first;
    int t = q.front().second;
    mx = max(mx, t);
    q.pop();
    for (int i = 0; i < 4; i++) {
      int tx = qx + dx[i];
      int ty = qy + dy[i];
      if (tx >= m || tx < 0 || ty >= n || ty < 0 || d[ty][tx] <= t + 1) continue;
      d[ty][tx] = t + 1;
      q.push({{ty, tx}, t + 1});
    }
  }
  cout << mx;
}