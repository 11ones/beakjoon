// 2024년 11월 19일 23:15:33
// 맞았습니다!!
// 2160KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  int r, c;
  array<array<char, 100>, 100> a;
  fill(&a[0][0], &a[99][100], '.');
  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;
  for (int o = 0; o < n; o++) {
    int x;
    cin >> x;
    x = r - x;
    if (o % 2) {
      for (int i = c - 1; i >= 0; i--) {
        if (a[x][i] == 'x') {
          a[x][i] = '.';
          break;
        }
      }
    } else {
      for (int i = 0; i < c; i++) {
        if (a[x][i] == 'x') {
          a[x][i] = '.';
          break;
        }
      }
    }
    array<array<char, 100>, 100> t, d, s;
    fill(&t[0][0], &t[99][100], '.');
    d = t;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (a[i][j] == 'x') {
          queue<pair<int, int>> q;
          q.push({i, j});
          t[i][j] = 'x';
          while (!q.empty()) {
            int qy = q.front().first;
            int qx = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
              int ty = dy[i] + qy;
              int tx = dx[i] + qx;
              if (tx < 0 || tx >= c || ty < 0 || ty >= r || t[ty][tx] == 'x' || a[ty][tx] != 'x') {
                continue;
              }
              t[ty][tx] = 'x';
              q.push({ty, tx});
            }
          }
          goto A;
        }
      }
    }
  A:
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        d[i][j] = a[i][j] != t[i][j] ? 'x' : '.';
      }
    }
    s = d;
    vector<pair<int, int>> m;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (t[i][j] == 'x') {
          m.push_back({i, j});
        }
      }
    }
    int y;
    for (y = 1; y < 100; y++) {
      for (auto &e : m) {
        if (e.first + y >= r || d[e.first + y][e.second] == 'x') {
          y--;
          goto B;
        }
      }
    }
  B:
    for (int i = 0; i < r - y; i++) {
      for (int j = 0; j < c; j++) {
        if (t[i][j] == 'x') {
          s[i + y][j] = 'x';
        }
      }
    }

    m.clear();
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (d[i][j] == 'x') {
          m.push_back({i, j});
        }
      }
    }
    for (y = 1; y < 100; y++) {
      for (auto &e : m) {
        if (e.first + y >= r || t[e.first + y][e.second] == 'x') {
          y--;
          goto C;
        }
      }
    }
  C:
    for (int i = 0; i < r - y; i++) {
      for (int j = 0; j < c; j++) {
        if (d[i][j] == 'x') {
          t[i + y][j] = 'x';
        }
      }
    }

    if (a == t) {
      a = s;
    } else {
      a = t;
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << a[i][j];
    }
    cout << '\n';
  }
}