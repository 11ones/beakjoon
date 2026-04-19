// 2024년 4월 25일 23:26:55
// 시간 초과
// KB
// ms
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
  int **zero = new int *[n];
  int **tzero = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
    zero[i] = new int[m];
    tzero[i] = new int[m]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!arr[i][j]) {
        continue;
      }
      for (int k = 0; k < 4; k++) {
        if (!arr[i + dy[k]][j + dx[k]]) {
          zero[i][j]++;
        }
      }
    }
  }
  int fy = 0;
  while (1) {
    int **vst = new int *[n];
    for (int i = 0; i < n; i++) {
      vst[i] = new int[m]{};
    }
    bool chk = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] && !vst[i][j]) {
          if (chk) {
            cout << fy;
            return 0;
          }
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
    for (int i = 0; i < n; i++) {
      delete[] vst[i];
    }
    delete[] vst;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] && arr[i][j] - zero[i][j] <= 0) {
          arr[i][j] = 0;
          for (int k = 0; k < 4; k++) {
            if (arr[i][j]) {
              tzero[i + dy[k]][j + dx[k]]++;
            }
          }
          continue;
        }
        arr[i][j] -= zero[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        zero[i][j] += tzero[i][j];
      }
    }
    fy++;
  }
}