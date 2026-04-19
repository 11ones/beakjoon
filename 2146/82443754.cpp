// 2024년 8월 13일 22:52:39
// 맞았습니다!!
// 2288KB
// 44ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  
  int n;
  cin >> n;
  int **a = new int *[n], **v = new int *[n];
  for (int i = 0; i < n; i++) {
    a[i] = new int[n]{};
  }
  for (int i = 0; i < n; i++) {
    v[i] = new int[n]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  int num = 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] == 1) {
        a[i][j] = num;
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
          int tf = q.front().first;
          int ts = q.front().second;
          q.pop();
          for(int k = 0; k < 4; k++) {
            int tx = ts + dx[k];
            int ty = tf + dy[k];
            if(tx < 0 || tx >= n || ty < 0 || ty >= n || a[ty][tx] != 1) {
              continue;
            }
            a[ty][tx] = num;
            q.push({ty, tx});
          }
        }
        num++;
      }
    }
  }

  int mn = 100000;
  for(int o = 2; o < num; o++) {
    fill(&v[0][0], &v[n - 1][n], 100000);
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(a[i][j] == o) {
          v[i][j] = 0;
          q.push({i, j});
        }
      }
    }
    while (!q.empty()) {
      int tf = q.front().first;
      int ts = q.front().second;
      q.pop();
      for(int k = 0; k < 4; k++) {
        int tx = ts + dx[k];
        int ty = tf + dy[k];
        if(tx < 0 || tx >= n || ty < 0 || ty >= n || v[ty][tx] <= v[tf][ts] + 1) {
          continue;
        }
        v[ty][tx] = v[tf][ts] + 1;
        if(a[ty][tx] != o && a[ty][tx]) {
          mn = min(mn, v[ty][tx] - 1);
          break;
        }
        q.push({ty, tx});
      }
    }
  } 
  cout << mn;
}