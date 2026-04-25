// 2024년 3월 8일 23:07:42
// 맞았습니다!!
// 2156KB
// 20ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> pi;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  int **p = new int *[n];
  for (int i = 0; i < n; i++) {
    p[i] = new int[m]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> p[i][j];
    }
  }
  int ans = 0;
  while (1) {
    int cc = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (p[i][j] == 1) {
          cc++;
        }
      }
    }
    if (cc == 0) {
      break;
    }
    ans++;
    int **o = new int *[n], **s = new int *[n];
    for (int i = 0; i < n; i++) {
      o[i] = new int[m]{};
      s[i] = new int[m]{};
    }
    queue<pi> q;
    q.push({0, 0});
    o[0][0] = 1;
    while (!q.empty()) {
      auto t = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int tx = t.second + dx[i];
        int ty = t.first + dy[i];
        if (tx < 0 || tx >= m || ty < 0 || ty >= n || p[ty][tx] == 1 ||
            o[ty][tx] == 1) {
          continue;
        }
        o[ty][tx] = 1;
        q.push({ty, tx});
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (p[i][j] == 0) {
          continue;
        }
        for (int k = 0; k < 4; k++) {
          int tx = j + dx[k];
          int ty = i + dy[k];
          if (tx < 0 || tx >= m || ty < 0 || ty >= n ||
              o[ty][tx] == 1) {
            continue;
          }
          s[i][j]++;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (p[i][j] == 0) {
          continue;
        }
        bool check = 1;
        for (int k = 0; k < 4; k++) {
          int tx = j + dx[k];
          int ty = i + dy[k];
          if (tx < 0 || tx >= m || ty < 0 || ty >= n || p[ty][tx] == 1 ||
              s[i][j] > 2) {
            continue;
          }
          check = 0;
        }
        if (check) {
          continue;
        }
        p[i][j] = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      delete[] o[i];
      delete[] s[i];
    }
    delete[] o;
    delete[] s;
  }
  cout << ans;
}