// 2024년 11월 4일 23:58:19
// 맞았습니다!!
// 3988KB
// 32ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  queue<pair<int, int>> q;
  pair<int, int> E;
  char c;
  int w, h;
  cin >> h >> w;
  array<array<int, 500>, 500> a{}, v;
  fill(&v[0][0], &v[w - 1][h], 1e9);
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cin >> c;
      if (c == 'T') {
        q.push({i, j});
        v[i][j] = 0;
        a[i][j] = 0;
      }
      if (c == 'E') {
        E = {i, j};
      }
      a[i][j] = c - '0';
    }
  }
  while (!q.empty()) {
    int qf = q.front().first;
    int qs = q.front().second;
    q.pop();
    int tf, ts;
    for (int i = 0; i < 4; i++) {
      tf = qf, ts = qs;
      int d = 0;
      while (1) {
        tf = tf + dy[i], ts = ts + dx[i];
        if (tf < 0 || tf >= w || ts < 0 || ts >= h || a[tf][ts] == 24) {
          break;
        }
        if (a[tf][ts] == 21) {
          v[tf][ts] = min(v[tf][ts], v[qf][qs] + d);
          break;
        }
        if (a[tf][ts] == 34) {
          if (v[tf - dy[i]][ts - dx[i]] > v[qf][qs] + d) {
            v[tf - dy[i]][ts - dx[i]] = v[qf][qs] + d;
            q.push({tf - dy[i], ts - dx[i]});
          }
          break;
        }
        d += a[tf][ts];
      }
    }
  }
  cout << (v[E.first][E.second] > 1e8 ? -1 : v[E.first][E.second]);
}