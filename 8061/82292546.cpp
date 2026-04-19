// 2024년 8월 10일 14:32:08
// 맞았습니다!!
// 2288KB
// 40ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  char c;
  int n, m;
  cin >> n >> m;
  int **a = new int*[n], **v = new int*[n];
  for(int i = 0; i < n; i++) {
    a[i] = new int[m]{};
  }
  for(int i = 0; i < n; i++) {
    v[i] = new int[m];
  }
  fill(&v[0][0], &v[n - 1][m], 1000);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> c;
      a[i][j] = c - '0';
      if(a[i][j]) {
        v[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j]) {
        queue<pair<int,int>> q;
        q.push({i, j});
        while(!q.empty()) {
          int tf = q.front().first;
          int ts = q.front().second;
          q.pop();
          for(int k = 0; k < 4; k++) {
            int tx = ts + dx[k];
            int ty = tf + dy[k];
            if(tx < 0 || tx >= m || ty < 0 || ty >= n || v[ty][tx] <= v[tf][ts] + 1) {
              continue;
            }
            v[ty][tx] = v[tf][ts] + 1;
            q.push({ty, tx});
          }
        }
      }
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }
}