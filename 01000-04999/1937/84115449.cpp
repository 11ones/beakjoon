// 2024년 9월 21일 00:07:01
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  array<array<int, 500>, 500> a, v{};
  vector<pair<int, pair<int, int>>> t;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      t.push_back({a[i][j], {i, j}});
    }
  }
  sort(t.begin(), t.end());

  int mx = 1;
  for (auto e : t) {
    int esf = e.second.first;
    int ess = e.second.second;
    if (!v[esf][ess]) {
      queue<pair<int, int>> q;
      array<array<int, 500>, 500> tv{};
      q.push({e.second});
      v[esf][ess] = 1;
      tv[esf][ess] = 1;
      while (!q.empty()) {
        int qx = q.front().second;
        int qy = q.front().first;
        q.pop();
        mx = max(mx, tv[qy][qx]);
        for (int k = 0; k < 4; k++) {
          int tx = qx + dx[k];
          int ty = qy + dy[k];
          if (tx >= n || tx < 0 || ty >= n || ty < 0 || tv[ty][tx] >= tv[qy][qx] + 1 || a[qy][qx] >= a[ty][tx]) continue;
          q.push({ty, tx});
          tv[ty][tx] = tv[qy][qx] + 1;
          v[ty][tx] = 1;
        }
      }
      
    }
  }
  cout << mx;
}