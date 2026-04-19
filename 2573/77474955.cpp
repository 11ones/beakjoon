// 2024년 4월 25일 22:58:44
// 틀렸습니다
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
  int **tarr = new int *[n]; 
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
    tarr[i] = new int[m];
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
            for (int i = 0; i < 4; i++) {
              int tx = dx[i] + t.second;
              int ty = dy[i] + t.first;
              if (tx < 0 || tx >= m || ty < 0 || ty >= n || vst[ty][tx] ||
                  !arr[ty][tx]) {
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

    tarr = arr;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if(!arr[i][j]) {
          continue;
        }
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
          if(!arr[i][j]) {
            cnt++;
          }
        }
        tarr[i][j] = max(0, arr[i][j] - cnt);
      }
    }
    arr = tarr;
    fy++;
  }
}