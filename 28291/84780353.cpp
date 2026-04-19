// 2024년 10월 5일 14:59:29
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  int w, h, n;
  cin >> w >> h >> n;
  vector<vector<int>> v(h, vector<int>(w)), r(h, vector<int>(w));
  queue<pair<int, int>> q;
  while (n--) {
    string s;
    int a, b;
    cin >> s >> a >> b;
    switch (s[9]) {
      case 'b':
        v[b][a] = 1;
        q.push({b, a});
        r[b][a] = 15;
        break;
      case 'd':
        v[b][a] = 2;
        break;
      case 'l':
        v[b][a] = 3;
    }
  }
  while (!q.empty()) {
    int qx = q.front().second;
    int qy = q.front().first;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int tx = qx + dx[i];
      int ty = qy + dy[i];
      if (tx < 0 || tx >= w || ty < 0 || ty >= h || v[ty][tx] < 2 || r[ty][tx] + 2 > r[qy][qx]) continue;
      if (r[qy][qx]) {
        r[ty][tx] = r[qy][qx] - 1;
        if (v[ty][tx] == 1) q.push({ty, tx});
      }
    }
  }
  for (int i = 0; i < h; i++) {
    for (auto j = 0; j < w; j++) {
      if (v[i][j] == 3 && !r[i][j]) {
        cout << "failed";
        return 0;
      }
    }
  }
  cout << "success";
}