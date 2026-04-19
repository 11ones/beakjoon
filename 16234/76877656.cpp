// 2024년 4월 13일 13:33:08
// 맞았습니다!!
// 2024KB
// 620ms
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> p;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  int n, l, r;
  cin >> n >> l >> r;

  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int m = 0;
  while (1) {
    int **vst = new int *[n];
    for (int i = 0; i < n; i++) {
      vst[i] = new int[n]{};
    }
    bool cng = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (vst[i][j] != 0) {
          continue;
        }
        vst[i][j] = 2;
        int sum = arr[i][j], cell = 1;
        queue<p> q;
        q.push({i, j});
        while (!q.empty()) {
          int qx = q.front().second;
          int qy = q.front().first;
          q.pop();
          for (int k = 0; k < 4; k++) {
            int tx = qx + dx[k];
            int ty = qy + dy[k];
            if (tx < 0 || tx >= n || ty < 0 || ty >= n || vst[ty][tx] != 0) {
              continue;
            }
            int dif = abs(arr[qy][qx] - arr[ty][tx]);
            if (dif < l || dif > r) {
              continue;
            }
            vst[ty][tx] = 2;
            q.push({ty, tx});
            sum += arr[ty][tx];
            cell++;
          }
        }
        if(cell == 1) {
          vst[i][j] = 1;
          continue;
        }
        for (int ii = 0; ii < n; ii++) {
          for (int jj = 0; jj < n; jj++) {
            if (vst[ii][jj] == 2) {
              cng = 0;
              vst[ii][jj]--;
              arr[ii][jj] = sum / cell;
            }
          }
        }
      }
    }
    if (cng) {
      cout << m;
      return 0;
    }
    m++;
    for (int i = 0; i < n; i++) {
      delete[] vst[i];
    }
    delete[] vst;
  }
}