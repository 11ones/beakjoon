// 2024년 9월 15일 22:21:54
// 맞았습니다!!
// 2420KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  int r, c, s = 0, w = 0;
  cin >> r >> c;
  vector<vector<char>> m;
  vector<vector<int>> v;
  for (int i = 0; i < r; i++) {
    vector<char> mt(c);
    m.push_back(mt);
  }
  for (int i = 0; i < r; i++) {
    vector<int> vt(c);
    v.push_back(vt);
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> m[i][j];
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (m[i][j] != '#' && v[i][j] == 0) {
        int ts = 0, tw = 0;
        queue<pair<int, int>> q;
        if (m[i][j] == 'o') {
          ts++;
        } else if (m[i][j] == 'v') {
          tw++;
        }
        v[i][j] = 1;
        q.push({i, j});
        while (!q.empty()) {
          int qx = q.front().second;
          int qy = q.front().first;
          q.pop();
          for (int k = 0; k < 4; k++) {
            int tx = qx + dx[k];
            int ty = qy + dy[k];
            if (tx >= c || tx < 0 || ty >= r || ty < 0 || v[ty][tx] == 1 || m[ty][tx] == '#') {
              continue;
            }
            if (m[ty][tx] == 'o') {
              ts++;
            } else if (m[ty][tx] == 'v') {
              tw++;
            }
            v[ty][tx] = 1;
            q.push({ty, tx});
          }
        }
        if (ts > tw) {
          s += ts;
        } else {
          w += tw;
        }
      }
    }
  }
  cout << s << " " << w;
}