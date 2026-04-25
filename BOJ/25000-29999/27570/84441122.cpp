// 2024년 9월 27일 23:55:05
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
  array<array<int, 1000>, 1000> a{};

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char x;
      cin >> x;
      if (x == 'X') {
        a[i][j] = 1;
      }
    }
  }
  for (int o = 0; o < 1000; o++) {
    int cnt = 0;
    auto t = a;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j]) {
          cnt++;
          int tcnt = 0;
          for (int k = 0; k < 4; k++) {
            int tx = j + dx[k];
            int ty = i + dy[k];
            if (tx >= m || tx < 0 || ty >= n || ty < 0) break;
            tcnt += a[ty][tx];
          }
          if (tcnt != 4) t[i][j] = 0;
        }
      }
    }
    a = t;
    if (!cnt) {
      cout << o;
      return 0;
    }
  }
}