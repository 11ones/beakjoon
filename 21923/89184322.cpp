// 2025년 1월 26일 15:06:16
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, mx = -1e8;
  cin >> n >> m;
  vector<vector<int>> v(n + 2, vector<int>(m + 2));
  fill(v[n + 1].begin(), v[n + 1].end(), -1e8);
  auto a = v, b = v;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> v[i][j];
    }
  }
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= m; j++) {
      a[i][j] = max(a[i + 1][j], a[i][j - 1]) + v[i][j];
      b[i - 1][m - j + 1] = max(b[i][m - j + 1], b[i - 1][m - j + 2]) + v[i - 1][m - j + 1];
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= m; j++) {
      mx = max(mx, a[i][j] + b[i][j]);
    }
  }
  cout << (n == 1 ? a[n][m] + v[n][m] : mx + v[n][m]);
}