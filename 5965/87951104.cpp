// 2024년 12월 29일 23:23:16
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  L n, k, mx = -1e12, t, i, j, x;
  cin >> n >> k;
  vector<vector<L>> v(n + 1, vector<L>(n, 0));
  for (i = 1; i <= n; i++) {
    for (j = 0; j < i; j++) {
      cin >> v[i][j];
      v[i][j] += v[i - 1][j];
    }
  }
  for (int y = k; y < n; y++) {
    for (i = 1; i + y <= n + 1; i++) {
      for (j = 0; j < i; j++) {
        t = 0;
        for (x = 0; x < y; x++) {
          t += v[i + y - 1][j + x] - v[i + x - 1][j + x];
        }
        mx = max(mx, t);
      }
    }
    for (i = y; i + y <= n + 1; i++) {
      for (j = 0; j + y <= i; j++) {
        t = 0;
        for (x = 0; x < y; x++) {
          t += v[i + x][j + x] - v[i - 1][j + x];
        }
        mx = max(mx, t);
      }
    }
  }
  cout << mx / (k * (k + 1) / 2);
}