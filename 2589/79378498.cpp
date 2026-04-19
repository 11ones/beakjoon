// 2024년 6월 8일 14:37:10
// 맞았습니다!!
// 2020KB
// 140ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, m;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  char arr[50][50];
  int vst[50][50];

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'L') {
        fill(&vst[0][0], &vst[49][50], 1000);
        vst[i][j] = 0;
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
          int qx = q.front().second;
          int qy = q.front().first;
          q.pop();
          for (int k = 0; k < 4; k++) {
            int tx = qx + dx[k];
            int ty = qy + dy[k];
            if (tx < 0 || tx >= m || ty < 0 || ty >= n || arr[ty][tx] == 'W') {
              continue;
            }
            if (vst[qy][qx] + 1 < vst[ty][tx]) {
              vst[ty][tx] = vst[qy][qx] + 1;
              mx = max(mx, vst[ty][tx]);
              q.push({ty, tx});
            }
          }
        }
      }
    }
  }
  cout << mx;
}