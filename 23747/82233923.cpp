// 2024년 8월 8일 23:35:17
// 맞았습니다!!
// 4628KB
// 72ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {-1, 1, 0, 0};
  map<char, int> m;
  m['U'] = 0;
  m['D'] = 1;
  m['L'] = 2;
  m['R'] = 3;

  int r, c;
  cin >> r >> c;
  vector<vector<char>> v, w;
  for (int i = 0; i < r; i++) {
    vector<char> tv(c);
    v.push_back(tv);
    w.push_back(tv);
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> v[i][j];
      w[i][j] = '#';
    }
  }
  int y, x;
  cin >> y >> x;
  y--;
  x--;
  string s;
  cin >> s;
  for (auto e : s) {
    if (e != 'W') {
      x += dx[m[e]];
      y += dy[m[e]];
      continue;
    }
    queue<pair<int, int>> q;
    q.push({y, x});
    w[y][x] = '.';
    while (!q.empty()) {
      auto t = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int tx = t.second + dx[i];
        int ty = t.first + dy[i];
        if (tx < 0 || tx >= c || ty < 0 || ty >= r || w[ty][tx] == '.' ||
            v[ty][tx] != v[y][x]) {
          continue;
        }
        w[ty][tx] = '.';
        q.push({ty, tx});
      }
    }
  }
  w[y][x] = '.';
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= c || ty < 0 || ty >= r) {
      continue;
    }
    w[ty][tx] = '.';
  }
  for (auto e : w) {
    for (auto ee : e) {
      cout << ee;
    }
    cout << '\n';
  }
}