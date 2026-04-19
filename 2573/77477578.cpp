// 2024년 4월 25일 23:57:06
// 맞았습니다!!
// 2684KB
// 124ms
// https://www.acmicpc.net/problem/2573

#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> p;

int main() {
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};

  int n, m;
  cin >> n >> m;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int fy = 0;
  while (1) {
    int **vst = new int *[n];
    for (int i = 0; i < n; i++) {
      vst[i] = new int[m]{};
    }
    bool chk = 0, allzero = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] && !vst[i][j]) {
          if (chk) {
            cout << fy;
            return 0;
          }
          allzero = 0;
          queue<p> q;
          q.push({i, j});
          while (!q.empty()) {
            p t = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
              int tx = dx[k] + t.second;
              int ty = dy[k] + t.first;
              if (vst[ty][tx] || !arr[ty][tx]) {
                continue;
              }
              vst[ty][tx] = 1;
              q.push({ty, tx});
            }
          }
          chk = 1;
        }
      }
    }
    if (allzero) {
      cout << 0;
      return 0;
    }
    for (int i = 0; i < n; i++) {
      delete[] vst[i];
    }
    delete[] vst;

    queue<p> q;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!arr[i][j]) {
          continue;
        }
        int cnt = 0;
        for (int k = 0; k < 4; k++) {
          if (!arr[i + dy[k]][j + dx[k]]) {
            cnt++;
          }
        }
        if (arr[i][j] - cnt <= 0) {
          q.push({i, j});
          continue;
        }
        arr[i][j] -= cnt;
      }
    }
    while (!q.empty()) {
      arr[q.front().first][q.front().second] = 0;
      q.pop();
    }
    fy++;
  }
}