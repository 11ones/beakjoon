// 2026년 3월 3일 00:12:42
// 맞았습니다!!
// 2168KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int T;
  cin >> T;
  while (T--) {
    int H, W, c = 0;
    cin >> H >> W;
    vector<vector<char>> v(H, vector<char>(W));
    vector<vector<int>> D(H, vector<int>(W));
    vector<int> C(26, 0);
    map<int, vector<array<int, 2>>> r;
    queue<array<int, 2>> q;
    string s;
    for (int i = 0; i < H; ++i) {
      for (int j = 0; j < W; ++j) {
        cin >> v[i][j];
        if (!i || !j || i == H - 1 || j == W - 1) {
          ++D[i][j];
          if (v[i][j] == '.') q.push({i, j});
          if (v[i][j] == '$') q.push({i, j}), ++c;
          if (v[i][j] > '`')
            q.push({i, j}), ++C[v[i][j] - 'a'];
          else if (v[i][j] > '@')
            r[v[i][j] - 'A'].push_back({i, j});
        }
      }
    }
    cin >> s;
    if (s != "0")
      for (auto e : s) C[e - 'a'] = 1;
    for (int i = 0; i < 26; ++i) {
      if (C[i]) {
        for (auto e : r[i]) q.push(e);
        r[i].clear();
      }
    }
    while (!q.empty()) {
      auto t = q.front();
      q.pop();
      for (int i = 0; i < 4; ++i) {
        int ty = t[0] + dy[i];
        int tx = t[1] + dx[i];
        if (ty < 0 || ty >= H || tx < 0 || tx >= W || D[ty][tx]) continue;
        ++D[ty][tx];
        if (v[ty][tx] == '$')
          q.push({ty, tx}), ++c;
        else if (v[ty][tx] > '`') {
          q.push({ty, tx}), ++C[v[ty][tx] - 'a'];
          for (auto e : r[v[ty][tx] - 'a']) q.push(e);
          r[v[ty][tx] - 'a'].clear();
        } else if (v[ty][tx] == '.' || (v[ty][tx] > '@' && C[v[ty][tx] - 'A']))
          q.push({ty, tx});
        else if (v[ty][tx] > '@')
          r[v[ty][tx] - 'A'].push_back({ty, tx});
      }
    }
    cout << c << '\n';
  }
}